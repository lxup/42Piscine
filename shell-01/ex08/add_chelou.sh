echo $FT_NBR1 + $FT_NBR2 | tr "'\"?!\\" "02341" | tr "mrdoc" "01234" | echo "ibase=5;$(cat)" | echo "obase=13;$(bc)" | bc | tr "0123456789ABC" "gtaio luSnemf"
