echo "Nhap n"
read n
for ((i=0;i<n;i++))
	do
		echo -n "a[$i]"
		read a[$i]
	done
#in day
for ((i=0;i<n;i++))
	do
		echo ${a[$i]}
		echo ""
	done
#tinh tong
s=0
for ((i=0;i<n;i++))
	do
		s=$(($s+${a[$i]}))
	done
	echo "Tong la:$s"
#sap xep
for ((i=0;i<n-1;i++))
	do
		for((j=$i;j<$n;j++))
		do
			if[[$arr[$i] -gt ${arr[$j]}]]
			then
			
			t=${arr[$i]}
			arr[$i]=${arr[$j]}
			arr[$j]=$t
			fi
		done
	done
for ((i=0;i<$n;i++))
do
echo "arr[$i]:${arr[$i]}"
done
