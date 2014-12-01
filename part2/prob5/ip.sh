#!/bin/sh
for prefix in `ifconfig -a | grep inet | grep -v '\(inet6\)\|\(127.0.0.1\)' | awk '{print $2}' | awk -F. '{printf("%s.%s.%s.\n",$1,$2,$3)}'`
do
	for i in `seq 0 255`
	do
		if ping -c 1 -W 1 $prefix$i >/dev/null
		then
			echo $prefix$i >>ip.txt
		fi
	done
done
