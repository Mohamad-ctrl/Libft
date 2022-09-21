echo "#Architecture: $(uname -a)"
echo "#Physical CPU: $(nproc)"
echo "#vCPU: $(nproc)"
echo "#Memory Usage: $(free | awk 'NR==2' |awk '{printf("%d/%dMB (%d%)\n", $3/1000, $2/1000, $3/$2*100)}')"
echo "$(df -h --output=size --total | awk 'END {print $1}')"
