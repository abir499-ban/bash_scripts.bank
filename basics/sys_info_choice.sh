#!/usr/bin/bash



while true
do
    cat << EOF
    1. Show disk Storage
    2. Show Memory Info
    3. Show system info
    4. Show hostname and current user
    5. exit
EOF

    read -p "enter your choice [1-5] " choice

    case $choice in
        1) df -h ;;
        2) free -h ;;
        3) uname -a ;;  
        4) hostname; whoami ;;
        5) exit 0 ;;
        *) echo "Invalid option" ;;
    esac
    sleep 1
done