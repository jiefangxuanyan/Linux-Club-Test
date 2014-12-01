#!/bin/sh
while read str
do
	if `echo $str | grep -q $1`
	then
		read -p "替换'${str}'中的'${1}'？[y/其他]" p
		if [ "$p" = "y" ]
		then
			echo ${str//$1/$2}
		else
			echo $str
		fi
	else
		echo $str
	fi
done
