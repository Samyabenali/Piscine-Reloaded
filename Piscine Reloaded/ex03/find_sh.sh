find . -type f -name '*.sh' | rev | cut -b4- | cut -d "/" -f 1 | rev
