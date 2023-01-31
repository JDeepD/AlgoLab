arg=("$@")
sed -i "s/DAY = .*$/DAY = $arg/" Makefile
make