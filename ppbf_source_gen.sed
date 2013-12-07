#!/usr/bin/env sed -f
1s/^/#define PPBF_SOURCE/
:l
$!N
$!b l
s/\n//g
s/>/ ip/g
s/</ dp/g
s/+/ iv/g
s/-/ dv/g
s/\./ sh/g
s/\[/ la/g
s/]/ gt/g
