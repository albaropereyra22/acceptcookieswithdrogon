#! /bin/sh -

git add .


if [ "X$1" = "X-h" ];
then
  tee - <<EOF
usage: command -h:"comment".
EOF

elif [ -z $1 ];
then
  printf "Enter comment:";
  read comment;
else
  comment="$@";
fi

git commit -m "$comment";
git push
