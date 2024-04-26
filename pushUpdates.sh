#! /bin/sh -


git add .

if [ -z $1 ];
then
  echo "Enter comment:";
  read comment;
  git commit -m "$comment";
else
  git commit -m "$1";
fi
git push
