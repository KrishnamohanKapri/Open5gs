# Open5gs
Research Project  
Current Status: Configuring the environment  
  
Setup VMWare:  
OS: Ubuntu 22.04 LTE  
Hardware allocation:  
- cpu cores: 8  
- memory: 12GB  
- storage: 120GB  

## Installed Docker
1. Add Docker's official GPG key:  
```
sudo apt-get update  
sudo apt-get install ca-certificates curl  
sudo install -m 0755 -d /etc/apt/keyrings  
sudo curl -fsSL https://download.docker.com/linux/ubuntu/gpg -o /etc/apt/keyrings/docker.asc  
sudo chmod a+r /etc/apt/keyrings/docker.asc  
```
2. Add the repository to Apt sources:  
```
echo \  
"deb [arch=$(dpkg --print-architecture) signed-by=/etc/apt/keyrings/docker.asc] https://download.docker.com/linux/ubuntu \  
$(. /etc/os-release && echo "$VERSION_CODENAME") stable" | \  
sudo tee /etc/apt/sources.list.d/docker.list > /dev/null  
sudo apt-get update  
```  
3. Install the latest docker version  
`sudo apt-get install docker-ce docker-ce-cli containerd.io docker-buildx-plugin docker-compose-plugin`  

[Installation Guide followed](https://docs.docker.com/engine/install/ubuntu/)  
      
## Installed Minikube
```
curl -LO https://github.com/kubernetes/minikube/releases/latest/download/minikube-linux-amd64/
sudo install minikube-linux-amd64 /usr/local/bin/minikube && rm minikube-linux-amd64
```

[Installation Guide followed](https://minikube.sigs.k8s.io/docs/start/?arch=%2Flinux%2Fx86-64%2Fstable%2Fbinary+download)

## Installed Helm
`sudo snap install helm --classic`  

[Installation Guide followed](https://helm.sh/docs/intro/install/)

## Initialized minikube
1. Check docker status  
`systemctl status docker`  

2. If docker engine not running  
`systemctl start docker`  

3. Initialize minikube single-node cluster  
`minikube start -p one --cpus 6 --memory 8192`  

4. Check status if everything is running  
`minikube profile list`  
`kubectl get node`  
`kubectl get all --all-namespaces`  

5. Access kubernetes dashboard  
`minikube -p one dashboard`

## Deploying Open5gs and UERANSIM-gnb
1. Pulled the repo
```
helm pull oci://registry-1.docker.io/gradiant/open5gs --version 2.2.0
helm pull oci://registry-1.docker.io/gradiant/ueransim-gnb --version 0.2.6
```
2. Deployed Open5gs  
`helm install open5gs oci://registry-1.docker.io/gradiant/open5gs --version 2.2.0 --values https://gradiant.github.io/5g-charts/docs/open5gs-ueransim-gnb/5gSA-values.yaml`

3. Deployed RAN  
`helm install ueransim-gnb oci://registry-1.docker.io/gradiant/ueransim-gnb --version 0.2.6 --values https://gradiant.github.io/5g-charts/docs/open5gs-ueransim-gnb/gnb-ues-values.yaml`

4. Check deployment  
`kubectl get pods`  

Output:
```
    NAME                                READY   STATUS    RESTARTS        AGE
    open5gs-amf-84d4946cbd-9w2g9        1/1     Running   0               8m24s
    open5gs-ausf-798f9b8b76-jfqnw       1/1     Running   0               8m25s
    open5gs-bsf-8d7d78876-l87ks         1/1     Running   0               8m25s
    open5gs-mongodb-689c64d968-bq2v8    1/1     Running   0               8m24s
    open5gs-nrf-7979df9b54-rcqzd        1/1     Running   0               8m25s
    open5gs-nssf-6cf4c5f57d-mhbqk       1/1     Running   0               8m24s
    open5gs-pcf-55bb68c7d8-j67b4        1/1     Running   3 (7m29s ago)   8m25s
    open5gs-populate-75f8c85c88-sc4tx   1/1     Running   0               8m25s
    open5gs-scp-576746c447-8xzwq        1/1     Running   0               8m25s
    open5gs-smf-7bbc8c4c95-z9ddw        1/1     Running   0               8m25s
    open5gs-udm-6b4968786b-fsj8r        1/1     Running   0               8m25s
    open5gs-udr-bf5b76969-9hx67         1/1     Running   3 (7m17s ago)   8m24s
    open5gs-upf-5867f8bf65-jvdrv        1/1     Running   0               8m25s
    open5gs-webui-64bdfc7794-bq8sn      1/1     Running   0               8m25s
    ueransim-gnb-db4987694-thzrj        1/1     Running   0               8m20s
    ueransim-gnb-ues-548b796f87-9lpc6   1/1     Running   2 (6m55s ago)   8m20s
```

[Guide followed](https://gradiant.github.io/5g-charts/open5gs-ueransim-gnb.html)

## Deploying and Configuring logging and monitoring tools
Need help in installing and configuring  
- loki to fetch logs from open5gs pods
- prometheus to fetch metrics from open5gs pods
- grafana to query and visualize logs from loki and metrics from prometheus

Currently stuck here