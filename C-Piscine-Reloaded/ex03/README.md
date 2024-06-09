```shell
user@machine ~/Desktop/reloaded
 % find . -type f -name '*.sh'
./ex03/find_sh.sh
./ex04/MAC.sh
user@machine ~/Desktop/reloaded
 % find . -type f -name '*.sh' | sed -e 's/\.ssh//'
./ex03/find_sh.sh
./ex04/MAC.sh
user@machine ~/Desktop/reloaded
 % find . -type f -name '*.sh' | sed -e 's/\.ssh//' | rev
hs.hs_dnif/30xe/.
hs.CAM/40xe/.
user@machine ~/Desktop/reloaded
 % find . -type f -name '*.sh' | sed -e 's/\.ssh//' | rev | cut -d / -f 1 
hs.hs_dnif
hs.CAM
user@machine ~/Desktop/reloaded
 % find . -type f -name '*.sh' | sed -e 's/\.ssh//' | rev | cut -d / -f 1  
hs.hs_dnif
hs.CAM
user@machine ~/Desktop/reloaded
 % find . -type f -name '*.sh' | sed -e 's/\.ssh//' | rev | cut -d / -f 1 | rev
find_sh.sh
MAC.sh
```
