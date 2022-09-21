!bin/bash

echo "#Architecture: $(uname -a)"
echo "#Physical CPU: $(nproc)"
echo "#vCPU: $(nproc)"
echo "#Memory Usage: $(free | awk 'NR==2' |awk '{printf("%d/%dMB (%d%)\n", $3/1000, $2/1000, $3/$2*100)}')"
echo "#Disk Usage: $(df --total | tail -1 | awk '{printf("%d/%dGB (%d%)\n", $3/1000/1000, $4/1000/1000, $5)}')"
echo "#Last Boot: $(uptime -s | awk '{printf("%s\n", $1)}') $(uptime -s | awk '{print substr($2, 1,length($2)-3)}')"
echo "#Connections TCP : $(netstat -an | grep ESTABLISHED | wc -l) ESTABLISHED"
echo "#User log: $(who -u)"
echo "#Network: $(hostname -I)"
