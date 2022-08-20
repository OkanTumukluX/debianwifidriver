#include <stdio.h>

int main(void){
	
	char secenek;
	
	
	printf("Wifi direveri kurmak istediğinize eminmisiniz.\n(/etc/apt/sources.list) dosyanız silinip yerine klasördeki sources.list dosyası atılacaktır.\n");
	printf("Eminseniz için:(E-e)\nDeğilseniz:(E-e dışında bir tuşa başınız.)\n");
	printf("------------------------------\n");
	printf("Seçenek:");
	scanf("%c",&secenek);
	
	//Wifi'yi kurmak için adımlar.
	if(secenek == 'e' || secenek == 'E'){
		system("sudo rm /etc/apt/sources.list");
		system("sudo cp sources.list  /etc/apt/");
		system("sudo apt update && sudo apt dist-upgrade -y");
		system("sudo apt install firmware-ipw2x00 wireless-tools -y && sudo apt update"); 
		system("sudo apt install firmware-iwlwifi -y && sudo modprobe iwlwifi -y");
		system("clear");
		
		
			//Bildiri.
			printf("Wifi'a bağlanmak için bilgisayarınızı yeniden başlatmak gerekiyor. bilginize..\n");
			printf("------------------------------\n");
		}
	else{
		system("exit");
		}
	return 0;
	}
