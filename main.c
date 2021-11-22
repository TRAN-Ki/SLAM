#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
// Version 1 - Killian TRAN
int main(void){
	int t, j, e=0, chk=0, e1=0;
	int i;
	char r='n', l;
	printf("Bienvenue dans le jeu du Pendu !\n");
	printf("Joueur 1 : Saisir la taille du mot : ");
	scanf("%d",&t);
	char m[t], p[t];
	while(r=='n' || r=='N'){
		printf("Saisir le mot (max : %d et caractere par caractere)\n",t);
		for (i=0;i<t;i++){
			printf("%d >>> ",i+1);
			getchar();
			scanf("%c",&m[i]);
      		m[i] = toupper(m[i]);
		}
		printf("Votre mot est : ");
		for (i=0;i<t;i++){
			printf("%c",m[i]);
		}
		printf("\nEtes-vous d'accord avec votre mot ?\n");
		printf("(O)ui ou (N)on : ");
		getchar();
		scanf("%c",&r);
		system("cls");
	}
	printf("La partie commence !\n");
	printf("Le mot a trouver est :");
	for (i=0;i<t;i++){
		p[i]='_';
	}
	p[0]=m[0];
	p[t-1]=m[t-1];
	for (i=0;i<t;i++){
		printf(" %c",p[i]);
	}
	while (e!=7 && chk!=t-2){
		printf("\nSaisissez votre proposition (une lettre) : ");
		getchar();
		scanf("%c",&l);
		l = toupper(l);
		e=e+1;
		e1=0;
		for (j=0;j<t;j++){
			if (l==p[j]){
				chk=chk-1;
			}
			if (l==m[j]){
				p[j]=l;
				if (e1==0) {
					e=e-1;
					e1=1;
				}
				chk=chk+1;
				}
		}

		for (j=0;j<t;j++){
		printf(" %c",p[j]);
		}
		printf("\n Nombre d'erreurs : %d \n Nombre de bonnes lettres trouvees : %d \n",e,chk);

		switch(e){
			case 0 : printf("\n");
		  printf("\n");
		  printf("\n");
		  printf("\n");
		  printf("\n");
		  printf("\n");
		  printf("   _|_\n\n");
		  break;

		  case 1 : printf("\n");
		  printf("    |\n");
		  printf("    |\n");
		  printf("    |\n");
		  printf("    |\n");
		  printf("    |\n");
		  printf("   _|_\n\n");
		  break;

		  case 2 : printf("    ____________\n");
		  printf("    |\n");
		  printf("    |\n");
		  printf("    |\n");
		  printf("    |\n");
		  printf("    |\n");
		  printf("   _|_\n\n");
		  break;

		  case 3 : printf("    ____________\n");
		  printf("    |          |\n");
		  printf("    |          O\n");
		  printf("    |\n");
		  printf("    |\n");
		  printf("    |\n");
		  printf("   _|_\n\n");
		  break;

		  case 4 : printf("    ____________\n");
		  printf("    |          |\n");
		  printf("    |          O\n");
		  printf("    |         /| \n");
		  printf("    |\n");
		  printf("    |\n");
		  printf("   _|_\n\n");
		  break;

		  case 5 : printf("    ____________\n");
		  printf("    |          |\n");
		  printf("    |          O\n");
		  printf("    |         /|\x5c \n");
		  printf("    |\n");
		  printf("    |\n");
		  printf("   _|_\n\n");
		  break;

		  case 6 : printf("    ____________\n");
		  printf("    |          |\n");
		  printf("    |          O\n");
		  printf("    |         /|\x5c \n");
		  printf("    |           \x5c \n");
		  printf("    |\n");
		  printf("   _|_\n\n");
		  break;

		  case 7 : printf("    ____________\n");
		  printf("    |          |\n");
		  printf("    |          O\n");
		  printf("    |         /|\x5c \n");
		  printf("    |         / \x5c \n");
		  printf("    |\n");
		  printf("   _|_\n\n");
		  printf("PERDU ! Le mot etait pourtant simple... Il ne faisait que %d caracteres !\n",t);
			printf("Voici le mot : ");
			for (i=0;i<t;i++){
				printf("%c",m[i]);
			}
		  break;
		}
	}
	if (chk==t-2) {
		system("cls");
		printf("Bravo tu as reussi !\nLe mot etait : \n");
		for (i=0;i<t;i++){
			printf("%c",m[i]);
		}
		printf("\nTu n'as fais que %d erreurs !",e);
		printf("Pendu realise par Killian TRAN\n");
	}
}
