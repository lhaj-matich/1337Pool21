#!/bin/sh

chelou1=`echo $FT_NBR1 | sed 'y/'\''\\"?!/01234/'`
chelou2=`echo $FT_NBR2 | sed 'y/mrdoc/01234/'`
command=`echo "ibase=5; $chelou1 + $chelou2" | bc`
echo "obase=13; $command" | bc | sed 'y/0123456789ABC/gtaio luSnemf/' 
