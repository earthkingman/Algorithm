gcc -Wall -Wextra -Werror get_next_line.c main.c -o get_next_line
./get_next_line < get_next_line.c > yours_.res
cat -e yours_.res > yours.res
cat -e get_next_line.c > origin.res
diff -y --suppress-common yours.res origin.res
# rm -rf *.res get_next_line