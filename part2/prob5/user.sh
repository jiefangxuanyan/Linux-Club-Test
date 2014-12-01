#!/bin/sh
awk -F: '{printf("%s ",$1);if(substr($2,0,1)=="*")print "no";else print "yes";}' /etc/passwd
