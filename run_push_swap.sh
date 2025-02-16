#!/bin/bash
while read line; do
    ./push_swap $line | wc -l
done < combinations.txt
