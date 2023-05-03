/*
Author: Bhautik Gondaliya
Date of Creation: 14th Feb 2023
Subject: Bank Application in Java
*/

/// package javaapplication2;

import java.util.Date;
import java.util.Scanner;

class Bank
{
	private int custID,accountNo;
        private String adminUser, adminPassword;
	private String custName,custUserName,custPassword,gender,maritialStatus;
	private float balance,deposit,withdrawal;
	
	Bank() //default constructor
	{
		balance=10000f;
                adminUser="admin";
                adminPassword="admin";
	}
	
	void depositAmount()
	{
		Scanner obj = new Scanner(System.in);
		System.out.println("Enter the amount you want to deposit: ");
		deposit = obj.nextFloat();
		if(deposit>0)
		{
			balance=balance+deposit;
		}
		else
		{
			System.out.println("The deposit amount cannot be less than or equal to zero");
		}
	} //End of DepositAmount
	
	void withAmount()
	{
		Scanner obj = new Scanner(System.in);
		System.out.println("Enter the withdrawal amount: ");
		withdrawal = obj.nextFloat();
		float tempBalance = balance-withdrawal;
		if(tempBalance<10000)
		{
			System.out.println("Insufficient Amount");
		}
		else
		{
			balance=tempBalance;
		}
	} //End of withdrawalAmount
	
	void checkBalance()
	{
		if(gender.equalsIgnoreCase("MALE") && maritialStatus.equalsIgnoreCase("U"))
		{
			System.out.println("Master "+custName+" your balance is "+balance);
		}
		else if(gender.equalsIgnoreCase("MALE") && maritialStatus.equalsIgnoreCase("M"))
		{
			System.out.println("Mr. "+custName+" your balance is "+balance);
		}
		else if(gender.equalsIgnoreCase("FEMALE") && maritialStatus.equalsIgnoreCase("U"))
		{
			System.out.println("Miss "+custName+" your balance is "+balance);
		}
		else
		{
			System.out.println("Mrs. "+custName+" your balance is "+balance);
		}
	} //End of checkBalance
        
        int loginAdmin(String uAdmin,String pAdmin)
        {
            if(uAdmin.equals(adminUser) && pAdmin.equals(adminPassword))
            {
                return 1;
            }
            return -1;
        } //End of loginAdmin
        
        static void showAdminMenu()
        {
            System.out.println("1) Create Customer");
            System.out.println("2) Display Customer");
            System.out.println("3) Search Customer");
            System.out.println("3) Exit");
        } //End of showAdminMenu
	
	void createCustomer()
	{
		Scanner obj = new Scanner(System.in);
		System.out.println("Enter the custid: ");
		custID = obj.nextInt();
		System.out.println("Enter the account number: ");
		accountNo = obj.nextInt();
		System.out.println("Enter the customer name: ");
		custName = obj.next();
		System.out.println("Enter the username you want to set: ");
		custUserName=obj.next();
		System.out.println("Enter the password: ");
		custPassword=obj.next();
                System.out.println("Enter the gender: ");
                gender=obj.next();
                System.out.println("Enter the maritial status: ");
                maritialStatus=obj.next();
	} //End of createCustomer
	
	void displayCustomer()
	{
		System.out.println(custID+"\t"+accountNo+"\t"+custUserName+"\t"+custPassword+"\t"+balance);
	} // End of displayCustomer
        
        int loginCustomer(String uName, String pass)
        {
            if(uName.equals(custUserName) && pass.equals(custPassword))
            {
                return 1;
            }
            return -1;
        } //End of loginCustomer
        
        int transferMoney(Bank objBank[], int accountNumber)
        {
            for(int i=0;i<2;i++)
            {
                if(objBank[i].accountNo==accountNumber)
                {    
                    return i;
                }
            }
            return -1;
        } //End of transferMoney
        
        float returnBalance()
        {
            return balance;
        } //End of returnBalance
        
        void updateBalance(float bal)
        {
            balance=bal;
        } //End of updateBalance
        
        static int search(Bank objBank[],int cid)
        {
            for(int i=0;i<2;i++)
            {
                if(objBank[i].custID==cid)
                {
                    return i;
                }
            }
            return -1;
        } //End of search
}

public class BankApplicationImplementation
{
	public static void main(String[] args)
	{
		Scanner obj = new Scanner(System.in);
		Bank objBank = new Bank();
		Bank objBank1[]=new Bank[2];
		while(true)
		{
                        System.out.println("1) Admin Login");
                        System.out.println("2) Customer Login");
                        System.out.println("3) Exit");
                        int choice=obj.nextInt();
                        
			switch(choice)
                        {
                            case 1:System.out.println("Plese Enter username and password: ");
                                /*
                                    Date objDate = new Date();
                                    System.out.println(objDate);
                                    if(objDate.toString().substring(0,3).equalsIgnoreCase("SUN"))
                                    {
                                        System.out.println("Sorry Bank is close today");
                                    }
                                 */
                                String uAdmin=obj.next();
                                String pAdmin=obj.next();
                                if(objBank.loginAdmin(uAdmin,pAdmin)==1)
                                {
                                    Bank.showAdminMenu();
                                    System.out.println("Enter the choice: ");
                                    int choiceAdmin=obj.nextInt();
                                    switch(choiceAdmin)
                                    {
                                        case 1: for(int i=0;i<2;i++)
					{
						objBank1[i]=new Bank();
						objBank1[i].createCustomer();
					}//createCustomer();
                                        break;
                                        case 2: System.out.println("cid\taccount\tcname\tusername\tpassword\tbalance");
						    for(int i=0;i<2;i++)
						    {
							    objBank1[i].displayCustomer();
						    }//displayCustomer();
                                        break;
                                        case 3: int cid;
                                                System.out.println("Enter the ID you want to search: ");
                                                cid=obj.nextInt();
                                                if(Bank.search(objBank1,cid)>=0)
                                                {
                                                    System.out.println("Customer Exists");
                                                }
                                                else
                                                {
                                                    System.out.println("Doesnot Exists");
                                                }
                                        break;
                                        case 4: System.out.println("Exit");
                                        break;
                                    } //End of Admin Menu Switch
                                }
                                else
                                {
                                    System.out.println("Please enter correct username and password");
                                }
                                break;
                                
                            case 2: int flag=-1;                 
                            System.out.println("Customer Login");
                            //Date objDate=new Date();
                            //System.out.println(objDate);
                            System.out.println("Enter the user name and password: ");
                            String cUser=obj.next();
                            String cPassword=obj.next();
                            for(int i=0;i<2;i++)
                            {
                                if(objBank1[i].loginCustomer(cUser,cPassword)==1)
                                {
                                    flag=i;
                                    break;
                                }
                            }
                            if(flag>=0)
                            {
                                System.out.println("1) Deposit");
                                System.out.println("2) Withdrawal");
                                System.out.println("3) check Balance");
                                System.out.println("4) Transfer");
                                System.out.println("5) Exit");
                                System.out.println("Enter the choice: ");
                                int key=obj.nextInt();
                                switch(key)
                                {
                                        case 1:objBank.depositAmount();
                                        break;
                                        case 2:objBank.withAmount();
                                        break;
                                        case 3:objBank.checkBalance();
                                        break;
                                        case 4: System.out.println("Enter the account where you want to transact: ");
                                                int accountNo=obj.nextInt();
                                                int targetIndex=objBank1[flag].transferMoney(objBank1,accountNo);
                                                if(targetIndex>=0)
                                                {
                                                    float amountTransfer;
                                                    System.out.println("Enter the amount you want to transfer: ");
                                                    amountTransfer=obj.nextFloat();
                                                    objBank1[flag].updateBalance((objBank1[flag].returnBalance())-amountTransfer);
                                                    objBank1[targetIndex].updateBalance((objBank1[targetIndex].returnBalance())+amountTransfer);
                                                }
                                                else
                                                {
                                                    System.out.println("Target customer doesnot exist");
                                                }
                                        break;
                                        case 5:System.exit(0);
                                        break;
                                } //End of switch of customer login
                            }
                            else
                            {
                                System.out.println("The credentials are incorrect");
                            }
                            case 3: System.exit(0);
                        } //End of main switch
		} //End of While
	}
}