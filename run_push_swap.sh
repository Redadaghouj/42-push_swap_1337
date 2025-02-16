#!/bin/bash
while IFS= read line; do
    ./push_swap $line | wc -l
done < combinations.txt
