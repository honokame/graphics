gnuplot <<EOF
set terminal png
set output "o.png"
plot "output.txt" using 1:2 w lp, "" using 3:4 w lp
EOF
