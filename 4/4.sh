echo data4.txt 4.txt > multiply.txt
./rotate $1 >> multiply.txt
cat multiply.txt | ./multiply
gnuplot <<EOF
set terminal png
set output "4-2.png"
plot "4.txt" using 1:2 w l, "4.txt" using 1:2 w p
EOF
eog 4-2.png &

