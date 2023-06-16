#!/bin/bash
echo "Enter file name:"
read file_nm
echo -e "#include <stdio.h>" > $file_nm
#\n/**\n  * main - Entry point\n  *\n  *Return: always 0\n  */\nint main(void)\n{\n\n	return (0);\n}"> $file_nm
echo "File created"
vim $file_nm
