#ssh-keygen -t rsa -b 4096 -C "binhboibac.dhttll@gmail.com"
#/home/kids/.ssh/id_rsa

path="https://github.com/TrinhVanBinhtcu/DHCN1A-4305.git"
username="TrinhVanBinhtcu"
email="binhboibac.dhttll@gmail.com"

#git init

git config --global user.name $username
git config --global user.email $email
git config --global color.ui auto

clear
work_path="/home/binhboibac/4305/DHCN1A-4305"
echo "username: " $username
echo "Email: " $email
echo "Path: "$path

echo
echo "LIST FILE"
echo
ls -lh
echo

git config --global core.editor "$work_path"
#git init

#add file
git  add *
git status
echo "commit content: "
read commit
echo
echo "Coomit content: $commit"
echo "PATH: $path"
echo
echo "*** working"
echo

#git add *
git commit -m "$commit"
git remote remove origin
git remote add origin "$path"
git pull origin master
#git push -f origin master

echo
echo "DONE!!!"	
