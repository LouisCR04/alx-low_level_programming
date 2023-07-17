#!/bin/bash
echo "Enter file name:"
read file_nm
cp template.h $file_nm
echo "File created"
vim $file_nm
