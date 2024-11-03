# cpp_md5sum
Install using the following
```
g++ -o myprogram main.cpp -I$CONDA_PREFIX/include -L$CONDA_PREFIX/lib -lssl -lcrypto
```

This is because I installed openssl using conda.

Before running the program, I need to do: 
```
export LD_LIBRARY_PATH=$CONDA_PREFIX/lib:$LD_LIBRARY_PATH
```