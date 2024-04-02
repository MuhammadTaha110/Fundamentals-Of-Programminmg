#include <stdio.h>


struct NewWarehouse
{
    char Name[15];
    char Warehouse[15];
    int CostPr;
    int SellPr;
    int Profit;
};

void New_Warehouse(void)
{
	int P;
	struct NewWarehouse Product[15];
    printf("Enter The Name Of Your Warehouse: ");
    scanf("%s",&Product[1].Warehouse);
    	fflush(stdin);
	for(P=1;P<3 
	;P++){
		printf("Enter Product %d Name : ",P);
		scanf("%s",&Product[P].Name);
		fflush(stdin);
		printf("Enter Product %d Cost Price : ",P);
		scanf("%d",&Product[P].CostPr);
		printf("Enter Product %d Selling Price : ",P);
		scanf("%d",&Product[P].SellPr);
		Product[P].Profit=Product[P].SellPr-Product[P].CostPr;
	}
		
}

void New_Warehouse_Details(void){
	int R;
	struct NewWarehouse Product[15];
    system("cls");
	printf("New Warehouse\n");
    printf("SerialNo.\tWarehouse\tProducts\tCost Price\tSelling Price\t\tProfit\n\n");
	for(R=1;R<3;R++){
	printf("%d\t\t%s\t\t%s\t\t%d\t\t%d\t\t\t%d\n",R,Product[R].Warehouse,Product[R].Name,Product[R].CostPr,Product[R].SellPr,Product[R].Profit);
    }
}

int main(){

New_Warehouse();
New_Warehouse_Details();
	
}





