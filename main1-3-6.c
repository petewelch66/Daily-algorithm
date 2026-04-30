#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n;
	int a,b,c,d,e,f,g,h,i;
	scanf("%d",&n);
	switch(n){
		case 1:
			a=1;
			printf("%5d",a);
			break;
		case 2:
			a=12;
			b=21;
			printf("%5d\n%5d",a,b);
			break;
		case 3:
			for(a=1;a<4;a++){
				for(b=1;b<4;b++){
					for(c=1;c<4;c++){
						if(a!=b&&a!=c&&b!=c){
							printf("%5d%5d%5d\n",a,b,c);
						}
					}
				}
			}
			break;
		case 4:
			for(a=1;a<5;a++){
				for(b=1;b<5;b++){
					for(c=1;c<5;c++){
						for(d=1;d<5;d++){
							if(a!=b&&a!=c&&a!=d&&b!=c&&b!=d&&c!=d){
								printf("%5d%5d%5d%5d\n",a,b,c,d);
							}
						}
					}
				}
			}
			break;
		case 5:
			for(a=1;a<6;a++){
				for(b=1;b<6;b++){
					for(c=1;c<6;c++){
						for(d=1;d<6;d++){
							for(e=1;e<6;e++){
								if(a!=b&&a!=c&&a!=d&&a!=e&&b!=c&&b!=d&&b!=e&&c!=d&&c!=e&&d!=e){
								printf("%5d%5d%5d%5d%5d\n",a,b,c,d,e);
								}
						    }
						}
					}
				}
			}
			break;
		case 6:
			for(a=1;a<7;a++){
				for(b=1;b<7;b++){
					for(c=1;c<7;c++){
						for(d=1;d<7;d++){
							for(e=1;e<7;e++){
								for(f=1;f<7;f++){								
									if(a!=b&&a!=c&&a!=d&&a!=e&&a!=f&&b!=c&&b!=d&&b!=e&&b!=f&&c!=d&&c!=e&&c!=f&&d!=e&&d!=f&&e!=f){
									printf("%5d%5d%5d%5d%5d%5d\n",a,b,c,d,e,f);
									}
								}
						    }
						}
					}
				}
			}
			break;
		case 7:
			for(a=1;a<8;a++){
				for(b=1;b<8;b++){
					for(c=1;c<8;c++){
						for(d=1;d<8;d++){
							for(e=1;e<8;e++){
								for(f=1;f<8;f++){		
									for(g=1;g<8;g++){															
									if(a!=b&&a!=c&&a!=d&&a!=e&&a!=f&&a!=g&&b!=c&&b!=d&&b!=e&&b!=f&&b!=g&&c!=d&&c!=e&&c!=f&&c!=g&&d!=e&&d!=f&&d!=g&&e!=f&&e!=g&&f!=g){
										printf("%5d%5d%5d%5d%5d%5d%5d\n",a,b,c,d,e,f,g);
										}
									}
								}
						    }
						}
					}
				}
			}
			break;
		case 8:
			for(a=1;a<9;a++){
				for(b=1;b<9;b++){
					for(c=1;c<9;c++){
						for(d=1;d<9;d++){
							for(e=1;e<9;e++){
								for(f=1;f<9;f++){		
									for(g=1;g<9;g++){
										for(h=1;h<9;h++){																									
											if(a!=b&&a!=c&&a!=d&&a!=e&&a!=f&&a!=g&&a!=h&&b!=c&&b!=d&&b!=e&&b!=f&&b!=g&&b!=h&&c!=d&&c!=e&&c!=f&&c!=g&&c!=h&&d!=e&&d!=f&&d!=g&&d!=h&&e!=f&&e!=g&&e!=h
											&&f!=g&&f!=h&&g!=h){
												printf("%5d%5d%5d%5d%5d%5d%5d%5d\n",a,b,c,d,e,f,g,h);
											}
										}
									}
								}
						    }
						}
					}
				}
			}
			break;
		case 9:
			for(a=1;a<10;a++){
				for(b=1;b<10;b++){
					for(c=1;c<10;c++){
						for(d=1;d<10;d++){
							for(e=1;e<10;e++){
								for(f=1;f<10;f++){		
									for(g=1;g<10;g++){
										for(h=1;h<10;h++){	
											for(i=1;i<10;i++){																														
												if(a!=b&&a!=c&&a!=d&&a!=e&&a!=f&&a!=g&&a!=h&&a!=i&&b!=c&&b!=d&&b!=e&&b!=f&&b!=g&&b!=h&&b!=i
												&&c!=d&&c!=e&&c!=f&&c!=g&&c!=h&&c!=i&&d!=e&&d!=f&&d!=g&&d!=h&&d!=i&&e!=f&&e!=g&&e!=h&&e!=i
												&&f!=g&&f!=h&&f!=i&&g!=h&&g!=i&&h!=i){
													printf("%5d%5d%5d%5d%5d%5d%5d%5d%5d\n",a,b,c,d,e,f,g,h,i);
											}
										}
										}
									}
								}
						    }
						}
					}
				}
			}
			break;
	}
	return 0;
}
