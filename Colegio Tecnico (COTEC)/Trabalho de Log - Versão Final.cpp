#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

//Nome: Guilherme Fabiano Terra Da Silva  - 1�AU - 2019 - Programa Proposto pelo professor SAAD
int main()
{
	//Declara��o de Vari�veis
	int exe,condicao,contexe,ok,decisao,aux,i,tamsub,teste,subhelp,subconserva,decisao3,key,tamCDC,helpCDC,helpCDCvar,decisaoCDC,obrigacaoCDC,paux,tamfp,uu,oo,qq,cons,tampc,helpp,auxp;
	char vet[100],alfa[100],afla[100],ajudasub[100],criptoSUB[100],vetCDC[100],criptoCDC[100],palfa[100],pmat[100][100],vetp[100],palavra[100],vettrans[100],criptop[100];
	
	//condi��o para executar enquanto usu�rio desejar 
	contexe=0;
	while(contexe==0)
	{
		//condi��o para decisao do usu�rio
		ok=0;
		while(ok==0)
		{
			printf("\n\n 1-Criptografia por SUBSTITUI��O \n 2-Criptografia de Cesar \n 3-Criptografia por Polialfa \n 4-Sair \n\n Decisao: ");
			scanf("%d",&decisao);
			
			if((decisao>=1)&&(decisao<=4))
			{
				ok=1;
			}
			else
			{
				ok=0;
				printf("\n\n Valor n�o Corresponde a condi��o \n\n");
			}
		}
		
		//Substitui��o
		if(decisao==1)
		{
			printf("\n\n Criptografia - Valores maiores ou iguais a 10 \n\n Descriptografia - Valores menores que 10 \n\n Decisao: ");
			scanf("%d",&decisao3);
			
			// Condi��o para Criptografar ou Descriptografar
			if(decisao3>=10)
			{
			
				//Gerando Vetor alfa 
				aux=65;
				for(i=1;i<=26;i++)
				{
					alfa[i]=aux;
					aux++;
				}
				
				aux=97;
				for(i=27;i<=26+26;i++)
				{
					alfa[i]=aux;
					aux++;
				}
				
				alfa[53]=32;
				
				//Impress�o
				printf("\n\n Vetor Alfa: \n\n");
				for(i=1;i<=26+26;i++)
				{
					printf("%c ",alfa[i]);
				}
				
				//Gerando vetor Afla
				aux=65+25;
				for(i=1;i<=26;i++)
				{
					afla[i]=aux;
					aux--;
				}
				
				aux=122;
				for(i=27;i<=26+26;i++)
				{
					afla[i]=aux;
					aux--;
				}
				
				afla[53]=32;
				//Impress�o
				printf("\n\n Vetor Afla (ALFA AO CONTR�RIO): \n\n");
				for(i=1;i<=26+26;i++)
				{
					printf("%c ",afla[i]);
				}
				
				//leitura da frase
				printf("\n\n Inserir sua Frase: \n\n");
				i=1;
				while((vet[i]=getche())!=13)
				{
					i++;
					tamsub=i-1;
				}
				
				printf("\n\n Frase Inserida: ");
				
				printf("\n\n");
				
				//Impressa�
				for(i=1;i<=tamsub;i++)
				{
					printf("%c",vet[i]);
				}
				printf("\n\n");
				
				//Criptografia
				subhelp=1;
				while(subhelp<=tamsub)
				{
					
					if(vet[subhelp]==32)
					{
						criptoSUB[subhelp]=32;
						subhelp++;
					}
					else
					{
						for(i=1;i<=26+26;i++)
						{
							if(vet[subhelp]==alfa[i])
							{
								subconserva=i;
								i=90;	
							}
							else
							{
								
							}
						}
						
						criptoSUB[subhelp]=afla[subconserva];
						subhelp++;	
					}
					
				}
				
				printf("\n\n Frase Criptografada:   ");
				//Impress�o
				for(i=1;i<=tamsub;i++)
				{
					printf("%c",criptoSUB[i]);
				}
			}
			else
			{
				//Gerando Vetor alfa 
				aux=65;
				for(i=1;i<=26;i++)
				{
					alfa[i]=aux;
					aux++;
				}
				
				aux=97;
				for(i=27;i<=26+26;i++)
				{
					alfa[i]=aux;
					aux++;
				}
				
				//Impress�o
				printf("\n\n Vetor Alfa: \n\n");
				for(i=1;i<=26+26;i++)
				{
					printf("%c ",alfa[i]);
				}
				
				//Gerando vetor Afla
				aux=65+25;
				for(i=1;i<=26;i++)
				{
					afla[i]=aux;
					aux--;
				}
				
				aux=122;
				for(i=27;i<=26+26;i++)
				{
					afla[i]=aux;
					aux--;
				}
				
				//Impress�o
				printf("\n\n Vetor Afla (ALFA AO CONTR�RIO): \n\n");
				for(i=1;i<=26+26;i++)
				{
					printf("%c ",afla[i]);
				}
				
				//leitura da frase
				printf("\n\n Inserir sua Frase Criptografada: \n\n");
				i=1;
				while((vet[i]=getche())!=13)
				{
					i++;
					tamsub=i-1;
				}
				
				printf("\n\n Frase Inserida: ");
				
				printf("\n\n");
				//Impressa�
				for(i=1;i<=tamsub;i++)
				{
					printf("%c",vet[i]);
				}
				
				
				printf("\n\n");
				//Descriptografia
				subhelp=1;
				while(subhelp<=tamsub)
				{
					if(vet[subhelp]==32)
					{
						subhelp++;
						criptoSUB[subhelp]=32;
					}
					else
					{
						for(i=1;i<=26+26;i++)
						{
							if(vet[subhelp]==afla[i])
							{
								subconserva=i;
								i=90;	
							}
							else
							{
								
							}
						}
						
						criptoSUB[subhelp]=alfa[subconserva];
						subhelp++;	
						
						
					}
				}
				
				printf("\n\n Frase Descriptografada:   ");
				//Impress�o
				for(i=1;i<=tamsub;i++)
				{
					printf("%c",criptoSUB[i]);
				}
				
			}	
		}
		else
		{
			if(decisao==2)
			{
				//Cifra de Cesar
				obrigacaoCDC=1;
				while(obrigacaoCDC==1)
				{
					printf("\n\n 1-Criptografar \n 2-Descriptografar \n\n\n\n");
					scanf("%d",&decisaoCDC);
					
					if((decisaoCDC>=1)&&(decisaoCDC<=2))
					{
						obrigacaoCDC=0;
					}
					else
					{
						
					}
				}
				
				
				
				if(decisaoCDC==1)
				{
					//Criptografia
					
					//Gerando Vetor alfa 
					aux=65;
					for(i=1;i<=26;i++)
					{
						alfa[i]=aux;
						aux++;
					}
						
					aux=97;
					for(i=27;i<=26+26;i++)
					{
						alfa[i]=aux;
						aux++;
					}
						
					//Impress�o
					for(i=1;i<=26+26;i++)
					{
						printf("%c ",alfa[i]);
						if(i==26)
						{
							printf("\n\n");
						}
						else
						{
								
						}
					}
						
					//Inser��o de Frase
					printf("\n\n Inserir sua frase:  ");
					i=1;
					while((vetCDC[i]=getche())!=13)
					{
						i++;
						tamCDC=i-1;
					}
					
					//Inser��o de CHAVE
					printf("\n\n Inserir a Chave:  ");
					scanf("%d",&key);
					
					//Declara��o Para adicionar o Espa�o nas frases
					alfa[26+27]=32;
					
					//Criptografia
					helpCDC=1;
					while(helpCDC<=tamCDC)
					{
						for(i=1;i<=26+27;i++)
						{
							if(vetCDC[helpCDC]==alfa[i])
							{
								helpCDCvar=i;
								i=90;
							}
							else
							{
								helpCDCvar=32;
							}
						}
							
						
						if(helpCDCvar!=26+27)
						{
							if(helpCDCvar<=26)
							{
								if((helpCDCvar+key)>27)
								{
									criptoCDC[helpCDC]=alfa[helpCDCvar+key-27];
								}
								else
								{
									criptoCDC[helpCDC]=alfa[helpCDCvar+key];
								}	
							}
							else
							{
								if((helpCDCvar+key)>52)
								{
									criptoCDC[helpCDC]=alfa[helpCDCvar+key-27];
								}
								else
								{
									criptoCDC[helpCDC]=alfa[helpCDCvar+key];
								}
							}
								
						}
						else
						{
							criptoCDC[helpCDC]=32;
						}
						helpCDC++;
					}
						
					printf("\n\n\n Frase Criptografada:  ");
					for(i=1;i<=tamCDC;i++)
					{
						printf("%c",criptoCDC[i]);
					}
				}
				else
				{
					//Descriptografia	
					
					//Gerando Vetor alfa 
					aux=65;
					for(i=1;i<=26;i++)
					{
						alfa[i]=aux;
						aux++;
					}
						
					aux=97;
					for(i=27;i<=26+26;i++)
					{
						alfa[i]=aux;
						aux++;
					}
						
					//Impress�o
					for(i=1;i<=26+26;i++)
					{
						printf("%c ",alfa[i]);
						if(i==26)
						{
							printf("\n\n");
						}
						else
						{
								
						}
					}
						
					//Inser��o de Frase Criptografada
					printf("\n\n Inserir sua frase:  ");
					i=1;
					while((vetCDC[i]=getche())!=13)
					{
						i++;
						tamCDC=i-1;
					}
					
					//Inser��o de CHAVE
					printf("\n\n Inserir a Chave:  ");
					scanf("%d",&key);
					
					//Declara��o Para adicionar o Espa�o nas frases
					alfa[26+27]=32;
					
					//Descriptografia
					helpCDC=1;
					while(helpCDC<=tamCDC)
					{
						for(i=1;i<=26+27;i++)
						{
							if(vetCDC[helpCDC]==alfa[i])
							{
								helpCDCvar=i;
								i=90;
							}
							else
							{
								helpCDCvar=32;
							}
						}
							
						
						if(helpCDCvar!=26+27)
						{
							if(helpCDCvar<=26)
							{
								if((helpCDCvar+27-key)<=26)
								{
									criptoCDC[helpCDC]=alfa[helpCDCvar-key+27];
								}
								else
								{
									criptoCDC[helpCDC]=alfa[helpCDCvar-key];
								}	
							}
							else
							{
								if((helpCDCvar+key)<=52)
								{
									criptoCDC[helpCDC]=alfa[helpCDCvar-key+27];
								}
								else
								{
									criptoCDC[helpCDC]=alfa[helpCDCvar-key];
								}
							}
								
						}
						else
						{
							criptoCDC[helpCDC]=32;
						}
						helpCDC++;
					}
					
					//Impressa� da frase Criptografada
					printf("\n\n\n Frase Criptografada:  ");
					for(i=1;i<=tamCDC;i++)
					{
						printf("%c",criptoCDC[i]);
					}
				}
				
			}
			else
			{
				if(decisao==3)
				{
					//PoliAlfa
					printf("\n\n APENAS LETRAS MAIUSCULAS \n\n");
					
					
					printf("\n 1- Criptografia \n 2- Descriptografia \n\n");
					scanf("%d",&decisao3);
					
					if(decisao3==1)
					{
							//Criptografia
							paux=65;
							for(i=0;i<=25;i++)
							{
								pmat[0][i]=paux;
								paux++;
							}
							
							printf("\n\n Inserir A frase a ser Criptografada: ");
							i=1;
							while((vetp[i]=getche())!=13)
							{
								i++;
								tamfp=i-1;
							}
							
							printf("\n\n Inserir A Palavra Chave: ");
							i=1;
							while((palavra[i]=getche())!=13)
							{
								i++;
								tampc=i-1;
							}
							
							for(i=1;i<=tampc;i++)
							{
								pmat[i][0]=palavra[i];
							}
							
							helpp=1;
							while(helpp<=tampc)
							{
								cons=1;
								auxp=pmat[helpp][0];	
								for(i=1;i<=25;i++)
								{
									pmat[helpp][i]=auxp+cons;
									cons++;
									
									if(pmat[helpp][i]==90)
									{
										auxp=64;
										cons=1;
									}
									else
									{
										
									}
								}
								helpp++;
							}
							
							printf("\n\n Valores na Matriz : \n\n\n");
							for(uu=0;uu<=tampc;uu++)
							{
								for(qq=0;qq<=25;qq++)
								{
									printf("%c ",pmat[uu][qq]);
								}
								printf("\n\n");
							}
							
							for(i=1;i<=tamfp;i++)
							{
								printf("%c",vetp[i]);
							}
							printf("\n");
							
							oo=0;
							for(i=1;i<=tamfp;i++)
							{
								oo++;
								vettrans[i]=palavra[oo];
								if(oo==tampc)
								{
									oo=0;
								}
								else
								{
									
								}
								
									
							}
							
							printf("\n\n =============00===============");
							for(i=1;i<=tamfp;i++)
							{
								printf("%c",vettrans[i]);
							}
							
							pmat[0][26]=32;
							helpp=1;
							while(helpp<=tamfp)
							{
								if(vetp[helpp]!=32)
								{
									for(i=1;i<=tampc;i++)
									{
										if(vettrans[helpp]==pmat[i][0])
										{
											uu=i;
											i=90;
										}
										else
										{
											
										}
									}
									
									for(i=0;i<=25;i++)
									{
										if(vetp[helpp]==pmat[uu][i])
										{
											qq=i;
											i=90;
										}
										else
										{
											
										}
									}
									
									criptop[helpp]=pmat[0][qq];
									helpp++;	
								}
								else
								{
									criptop[helpp]=32;
									helpp++;
								}
							}
							
							printf("\n\n Frase Criptografada: ");
							for(i=1;i<=tamfp;i++)
							{
								printf("%c",criptop[i]);
							}
					}
					else
					{
						//Descriptografia
						
						paux=65;
						for(i=0;i<=25;i++)
						{
							pmat[0][i]=paux;
							paux++;
						}
							
						printf("\n\n Inserir A frase a ser Descriptografada: ");
						i=1;
						while((vetp[i]=getche())!=13)
						{
							i++;
							tamfp=i-1;
						}
						
						printf("\n\n Inserir A Palavra Chave: ");
						i=1;
						while((palavra[i]=getche())!=13)
						{
							i++;
							tampc=i-1;
						}
						
						for(i=1;i<=tampc;i++)
						{
							pmat[i][0]=palavra[i];
						}
						
						helpp=1;
						while(helpp<=tampc)
						{
							cons=1;
							auxp=pmat[helpp][0];	
							for(i=1;i<=25;i++)
							{
								pmat[helpp][i]=auxp+cons;
								cons++;
									
								if(pmat[helpp][i]==90)
								{
									auxp=64;
									cons=1;
								}
								else
								{
									
								}
							}
							helpp++;
						}
							
						printf("\n\n Valores na Matriz : \n\n\n");
						for(uu=0;uu<=tampc;uu++)
						{
							for(qq=0;qq<=25;qq++)
							{
								printf("%c ",pmat[uu][qq]);
							}
							printf("\n\n");
						}
							
						for(i=1;i<=tamfp;i++)
						{
							printf("%c",vetp[i]);
						}
						printf("\n");
						
							oo=0;
							for(i=1;i<=tamfp;i++)
							{
								oo++;
								vettrans[i]=palavra[oo];
								if(oo==tampc)
								{
									oo=0;
								}
								else
								{
									
								}
								
									
							}
							
							for(i=1;i<=tamfp;i++)
							{
								printf("%c",vettrans[i]);
							}
							
							pmat[0][26]=32;
							helpp=1;
							while(helpp<=tamfp)
							{
								if(vetp[helpp]!=32)
								{
									for(i=0;i<=25;i++)
									{
										if(vetp[helpp]==pmat[0][i])
										{
											uu=i;
											i=90;
										}
										else
										{
											
										}
									}
									
									for(i=0;i<=tampc;i++)
									{
										if(vettrans[helpp]==pmat[i][0])
										{
											qq=i;
											i=90;
										}
										else
										{
											
										}
									}
									
									criptop[helpp]=pmat[qq][uu];
									helpp++;	
								}
								else
								{
									criptop[helpp]=32;
									helpp++;
								}
								
								
								
								
							}
							
							printf("\n\n Frase Descrptografada: ");
							for(i=1;i<=tamfp;i++)
							{
								printf("%c",criptop[i]);
							}
				
					}
				}
				else
				{
					contexe=1;
				}
			}
		}
	}
}
