# Open5gs
Research Project  
Current Status: Configuring the environment  
  
Setup VMWare:  
OS: Ubuntu 22.04 LTE  
Hardware allocation:  
    - cpu cores: 8  
    - memory: 12GB  
    - storage: 120GB  

## Setup Docker  
1. Adding docker's apt repository  

Add Docker's official GPG key:  
```
sudo apt-get update  
sudo apt-get install ca-certificates curl  
sudo install -m 0755 -d /etc/apt/keyrings  
sudo curl -fsSL https://download.docker.com/linux/ubuntu/gpg -o /etc/apt/keyrings/docker.asc  
sudo chmod a+r /etc/apt/keyrings/docker.asc  
```
Add the repository to Apt sources:  
```
echo \  
"deb [arch=$(dpkg --print-architecture) signed-by=/etc/apt/keyrings/docker.asc] https://download.docker.com/linux/ubuntu \  
$(. /etc/os-release && echo "$VERSION_CODENAME") stable" | \  
sudo tee /etc/apt/sources.list.d/docker.list > /dev/null  
sudo apt-get update  
```  
2. Installing the latest docker version  
`sudo apt-get install docker-ce docker-ce-cli containerd.io docker-buildx-plugin docker-compose-plugin`

[Installation Guide](https://docs.docker.com/engine/install/ubuntu/)  
      
## Setup Minikube  
Installing minikube 
```
curl -LO https://github.com/kubernetes/minikube/releases/latest/download/minikube-linux-amd64/
sudo install minikube-linux-amd64 /usr/local/bin/minikube && rm minikube-linux-amd64
```

[Installation Guide](https://minikube.sigs.k8s.io/docs/start/?arch=%2Flinux%2Fx86-64%2Fstable%2Fbinary+download)

## Setup Helm  
Installing Helm
`sudo snap install helm --classic`
[Installation Guide](https://helm.sh/docs/intro/install/)
