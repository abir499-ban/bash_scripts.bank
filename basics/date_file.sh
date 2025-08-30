#!/usr/bin/bash

date=$(date)

data="hostname : $HOSTNAME
      user : $(whoami)"

touch "$date.txt"

cat > "$date.txt" << EOF
$data
EOF