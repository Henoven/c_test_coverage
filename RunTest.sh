//rm -r build
mkdir build
cd build
cmake ..
make
//args for serie_numerica function
echo -e "b\nc\na\n3\nb\nc\na\n0\n1\na\n2\n20\n-1\n3\nb\nc\nd\n" | $RUN_WITH_VALGRIND ./aritmetica


