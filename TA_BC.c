#include <stdio.h>
main()
{
	int laptop,pilihan,harga,dp,jumlah,bulan,cicil,total,bunga,ulang,b;
	printf("berapa jumlah pelanggan : ");
	scanf("%d",&ulang);
	for(b=1;b<=ulang;b++){
	printf("\t\t==========================================\n");
	printf("\t\tAPLIKASI PEMBELIAN LAPTOP BUSINESS CENTER\n");
	printf("\t\t==========================================\n");

	printf("Pilihan jenis laptop -->\n");
	printf("1.advan c50\n");
	printf("2.vanbook 10inch\n");
	printf("Masukkan kode laptop yang akan anda beli : ");
	scanf("%d",&laptop);
	

	printf("Berapa banyak laptop yang anda akan beli ? ");
	scanf("%d",&jumlah);

	

				if (laptop==1)
				{
					printf("1.tunai\n");
					printf("2.kredit\n");
					printf("masukkan pilihan : ");
					scanf("%d",&pilihan);

					if(pilihan==1)
						{
							harga=35000000*jumlah;
							printf("anda harus membayar : %d\n",harga);
						} else
					if(pilihan==2)
						{
							printf("anda harus membayar dp 1000000 perlaptop\n");
							dp=3500000-1000000;
							printf("dikenakan bunga 1persen \n");
							printf("brp bulan anda akan mencicil ??");
							scanf("%d",&bulan);
							harga=jumlah*dp;
							cicil=harga/bulan;
							bunga=3500000*1/100*jumlah;
							total=cicil+bunga;
							printf("cicilan %d\n",total);
						}
				} else

					
	
				if (laptop==2)
				{
					printf("1.tunai\n");
					printf("2.kredit\n");
					printf("masukkan pilihan : ");
					scanf("%d",&pilihan);

					if(pilihan==1)
						{
							harga=jumlah*2300000;
							printf("anda harus membayar : %d\n",harga);
						}

					if(pilihan==2)
						{
							printf("anda harus membayar dp 500000perlaptop\n");
							dp=2300000-500000;
							printf("dikenakan bunga 1persen \n");
							printf("brp bulan anda akan mencicil ?");
							scanf("%d",&bulan);
							harga=jumlah*dp;
							cicil=harga/bulan;
							bunga=2300000*1/100*jumlah;
							total=cicil+bunga;
							printf("cicilan : %d\n",total);
						}
				}
				
	}

}