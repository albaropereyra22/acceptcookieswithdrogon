#! /bin/sh -

git add .

if [ -z $1 ];
then
  printf "Enter comment:";
  read comment;

else
  comment="$1";
fi
git commit -m "$comment";
git push
