#include <iostream>
#include <string>
#include <openssl/md5.h>
#include <sstream>
#include <iomanip>



using namespace std;


string md5sum(string s) {
    
    MD5_CTX md5_ctx;
    MD5_Init(&md5_ctx);

    MD5_Update(&md5_ctx, s.c_str(), s.size());

    unsigned char hash[MD5_DIGEST_LENGTH];
    MD5_Final(hash, &md5_ctx);

    string result;
    std::ostringstream oss;
    for (int i = 0; i < MD5_DIGEST_LENGTH; i++) {
        oss << std::hex << std::setw(2) << std::setfill('0') << (int)hash[i];
    }

    return oss.str();

}


int main() {

    string s = "Hello, World!";
    cout << s << endl;
    cout << md5sum(s) << endl;

    return 0;
}