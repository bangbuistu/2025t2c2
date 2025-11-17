#!/bin/bash
$n=9;
read -p "nhap n" n
if [[ $n % 3 == 0 ]]; then
echo "$n, la boi so cua 3"
else
echo "$n, khong la boi so cua 3"
fi
