/*
Author: Bhautik Gondaliya
Date of Creation: 12th Feb 2023
Subject: Create Hotel's Food Menu Application using Java
*/

/// package foodmenu;

import java.util.Scanner;

public class FoodMenu
{
    public static void main(String[] args)
    {
        float totalPrice;
        Scanner obj=new Scanner(System.in);
        System.out.println("1) South Indian");
        System.out.println("2) Punjabi");
        System.out.println("3) Gujarati");
        System.out.println("4) Italian");
        System.out.println("5) Exit");
        System.out.println("Enter the choice: ");
        int key = obj.nextInt();
        switch(key)
        {
            case 1: System.out.println("You have selected South Indian");
					System.out.println("1) Dosa");
					System.out.println("2) Idli");
					System.out.println("3) Utappa");
					System.out.println("4) Vada");
					System.out.println("Enter the choice of south indian you want: ");
					int choiceSouth=obj.nextInt();
					switch(choiceSouth)
					{
						case 1: System.out.println("Welcome you have entered dosa of South Indian");
								System.out.println("1) Masala Dosa -- Rs.40");
								System.out.println("2) Rava Dosa -- Rs.50");
								System.out.println("3) Spring Dosa -- Rs.60");
								System.out.println("Enter the dosa you want to order: ");
								int choiceDosa=obj.nextInt();
								switch(choiceDosa)
								{
									case 1: System.out.println("You have selected Masala Dosa in Dosa option under South Indian");
											System.out.println("Enter the number of plates: ");
											int qtyDosa=obj.nextInt();
											totalPrice=qtyDosa*40;
											System.out.println("The total price of"+qtyDosa+"is"+totalPrice);
									break;
									case 2: System.out.println("You have selected Rava Dosa in Dosa option under South Indian");
											System.out.println("Enter the number of plates: ");
											qtyDosa=obj.nextInt();
											totalPrice=qtyDosa*50;
											System.out.println("The total price of"+qtyDosa+"is"+totalPrice);
									break;
									case 3: System.out.println("You have selected Spring Dosa in Dosa option under South Indian");
											System.out.println("Enter the number of plates: ");
											qtyDosa=obj.nextInt();
											totalPrice=qtyDosa*60;
											System.out.println("The total price of"+qtyDosa+"is"+totalPrice);
									break;
									default: System.out.println("Invalid Choice");
									break;
								}
						break;
						case 2: System.out.println("Welcome you have entered Idli of South Indian");
								System.out.println("1) Rice Idli-- Rs.20");
								System.out.println("2) Stuffed Idli -- Rs.60");
								System.out.println("3) Rava Idli -- Rs.40");
								System.out.println("Enter the Idli you want to order: ");
								int choiceIdli=obj.nextInt();
								switch(choiceIdli)
								{
									case 1: System.out.println("You have selected Rice Idli in Idli option under South Indian");
											System.out.println("Enter the number of plates: ");
											int qtyIdli=obj.nextInt();
											totalPrice=qtyIdli*20;
											System.out.println("The total price of"+qtyIdli+"is"+totalPrice);
									break;
									case 2: System.out.println("You have selected Stuffed Idli in Idli option under South Indian");
											System.out.println("Enter the number of plates: ");
											qtyIdli=obj.nextInt();
											totalPrice=qtyIdli*60;
											System.out.println("The total price of"+qtyIdli+"is"+totalPrice);
									break;
									case 3: System.out.println("You have selected Rava Idli in Idli option under South Indian");
											System.out.println("Enter the number of plates: ");
											qtyIdli=obj.nextInt();
											totalPrice=qtyIdli*40;
											System.out.println("The total price of"+qtyIdli+"is"+totalPrice);
									break;
									default: System.out.println("Invalid Choice");
									break;
								}
						break;
						case 3: System.out.println("Welcome you have entered Uttapa of South Indian");
								System.out.println("1) Rava Uttapa-- Rs.50");
								System.out.println("2) Bread Uttapa -- Rs.90");
								System.out.println("3) Oats Uttapa -- Rs.70");
								System.out.println("Enter the Uttapa you want to order: ");
								int choiceUttapa=obj.nextInt();
								switch(choiceUttapa)
								{
									case 1: System.out.println("You have selected Rava Uttapa in Uttapa option under South Indian");
											System.out.println("Enter the number of plates: ");
											int qtyuttapa=obj.nextInt();
											totalPrice=qtyuttapa*50;
											System.out.println("The total price of"+qtyuttapa+"is"+totalPrice);
									break;
									case 2: System.out.println("You have selected Bread Uttapa in Uttapa option under South Indian");
											System.out.println("Enter the number of plates: ");
											qtyuttapa=obj.nextInt();
											totalPrice=qtyuttapa*90;
											System.out.println("The total price of"+qtyuttapa+"is"+totalPrice);
									break;
									case 3: System.out.println("You have selected Oats Uttapa in Uttapa option under South Indian");
											System.out.println("Enter the number of plates: ");
											qtyuttapa=obj.nextInt();
											totalPrice=qtyuttapa*70;
											System.out.println("The total price of"+qtyuttapa+"is"+totalPrice);
									break;
									default: System.out.println("Invalid Choice");
									break;
								}
						break;
						case 4: System.out.println("Welcome you have entered Vada of South Indian");
								System.out.println("1) Medu Vada-- Rs.40");
								System.out.println("2) Rajasthani Mirchi Vada -- Rs.60");
								System.out.println("3) Batata Vada -- Rs.30");
								System.out.println("Enter the Vada you want to order: ");
								int choiceVada=obj.nextInt();
								switch(choiceVada)
								{
									case 1: System.out.println("You have selected Medu Vada in Vada option under South Indian");
											System.out.println("Enter the number of plates: ");
											int qtyvada=obj.nextInt();
											totalPrice=qtyvada*40;
											System.out.println("The total price of"+qtyvada+"is"+totalPrice);
									break;
									case 2: System.out.println("You have selected Rajasthani Mirchi Vada in Vada option under South Indian");
											System.out.println("Enter the number of plates: ");
											qtyvada=obj.nextInt();
											totalPrice=qtyvada*60;
											System.out.println("The total price of"+qtyvada+"is"+totalPrice);
									break;
									case 3: System.out.println("You have selected Batata Vada in Vada option under South Indian");
											System.out.println("Enter the number of plates: ");
											qtyvada=obj.nextInt();
											totalPrice=qtyvada*30;
											System.out.println("The total price of"+qtyvada+"is"+totalPrice);
									break;
									default: System.out.println("Invalid Choice");
									break;
								}
						break;
						default: System.out.println("Invalid Choice");
						break;
					}
            break;
            case 2:
                System.out.println("You have selected Punjabi");
				System.out.println("1) Chole Bhature -- Rs.120");
				System.out.println("2) Sarson ka Saag Aur Makki Ki Roti -- Rs.200");
				System.out.println("3) Masala Channa -- Rs.150");
				System.out.println("4) Dal Makhani -- Rs.170");
				System.out.println("Enter the choice of Punjabi you want: ");
				int choicePunjabi=obj.nextInt();
				switch(choicePunjabi)
				{
					case 1: System.out.println("You have selected Chole Bhature in Punjabi");
							System.out.println("Enter the number of plates: ");
							int qtycholebhature=obj.nextInt();
							totalPrice=qtycholebhature*120;
							System.out.println("The total price of"+qtycholebhature+"is"+totalPrice);
					break;
					case 2: System.out.println("You have selected Sarson ka Saag Aur Makki Ki Roti in Punjabi");
							System.out.println("Enter the number of plates: ");
							int qtysarson=obj.nextInt();
							totalPrice=qtysarson*200;
							System.out.println("The total price of"+qtysarson+"is"+totalPrice);
					break;
					case 3: System.out.println("You have selected Masala Channa in Punjabi");
							System.out.println("Enter the number of plates: ");
							int qtymasalachanna=obj.nextInt();
							totalPrice=qtymasalachanna*150;
							System.out.println("The total price of"+qtymasalachanna+"is"+totalPrice);
					break;
					case 4: System.out.println("You have selected Dal Makhani in Punjabi");
							System.out.println("Enter the number of plates: ");
							int qtydalmakhani=obj.nextInt();
							totalPrice=qtydalmakhani*170;
							System.out.println("The total price of"+qtydalmakhani+"is"+totalPrice);
					break;
					default: System.out.println("Invalid Choice");
					break;
					}
            break;
            case 3:
                System.out.println("You have selected Gujarati");
				System.out.println("1) Khandvi -- Rs.120");
				System.out.println("2) Gujarati Samosa -- Rs.150");
				System.out.println("3) Undhiyu -- Rs.100");
				System.out.println("4) Dhokla -- Rs.110");
				System.out.println("Enter the choice of Gujarati you want: ");
				int choiceGujarati=obj.nextInt();
				switch(choiceGujarati)
				{
					case 1: System.out.println("You have selected Khandvi in Gujarati");
							System.out.println("Enter the number of plates: ");
							int qtykhandvi=obj.nextInt();
							totalPrice=qtykhandvi*120;
							System.out.println("The total price of"+qtykhandvi+"is"+totalPrice);
					break;
					case 2: System.out.println("You have selected Gujarati Samosa in Gujarati");
							System.out.println("Enter the number of plates: ");
							int qtysamosa=obj.nextInt();
							totalPrice=qtysamosa*150;
							System.out.println("The total price of"+qtysamosa+"is"+totalPrice);
					break;
					case 3: System.out.println("You have selected Undhiyu in Gujarati");
							System.out.println("Enter the number of plates: ");
							int qtyundhiyu=obj.nextInt();
							totalPrice=qtyundhiyu*100;
							System.out.println("The total price of"+qtyundhiyu+"is"+totalPrice);
					break;
					case 4: System.out.println("You have selected Dhokla in Gujarati");
							System.out.println("Enter the number of plates: ");
							int qtydhokla=obj.nextInt();
							totalPrice=qtydhokla*110;
							System.out.println("The total price of"+qtydhokla+"is"+totalPrice);
					break;
					default: System.out.println("Invalid Choice");
					break;
					}
            break;
            case 4:
                System.out.println("You have selected Italian");
				System.out.println("1) Pasta");
				System.out.println("2) Bread");
				System.out.println("Enter the choice of Italian you want: ");
				int choiceItalian=obj.nextInt();
				switch(choiceItalian)
				{
					case 1: System.out.println("Welcome you have entered Pasta of Italian");
							System.out.println("1) Penne Ala Vodka -- Rs.200");
							System.out.println("2) Four Cheese Pasta -- Rs.250");
							System.out.println("3) Sicilian Spicy Pasta -- Rs.300");
							System.out.println("Enter the Pasta you want to order: ");
							int choicePasta=obj.nextInt();
							switch(choicePasta)
							{
								case 1: System.out.println("You have selected Penne Ala Vodka in Pasta option under Italian");
										System.out.println("Enter the number of plates: ");
										int qtyPenne=obj.nextInt();
										totalPrice=qtyPenne*200;
										System.out.println("The total price of"+qtyPenne+"is"+totalPrice);
								break;
								case 2: System.out.println("You have selected Four Cheese Pasta in Pasta option under Italian");
										System.out.println("Enter the number of plates: ");
										int qtyCheese=obj.nextInt();
										totalPrice=qtyCheese*250;
										System.out.println("The total price of"+qtyCheese+"is"+totalPrice);
								break;
								case 3: System.out.println("You have selected Sicilian Spicy Pasta in Pasta option under Italian");
										System.out.println("Enter the number of plates: ");
										int qtySpicy=obj.nextInt();
										totalPrice=qtySpicy*300;
										System.out.println("The total price of"+qtySpicy+"is"+totalPrice);
								break;
								default: System.out.println("Invalid Choice");									
								break;
							}
					break;
					case 2: System.out.println("Welcome you have entered Pasta of Italian");
							System.out.println("1) Focaccia -- Rs.300");
							System.out.println("2) Ciabatta -- Rs.250");
							System.out.println("3) Classic Italian Bread -- Rs.200");
							System.out.println("Enter the Bread you want to order: ");
							int choiceBread=obj.nextInt();
							switch(choiceBread)
							{
								case 1: System.out.println("You have selected Focaccia in Bread option under Italian");
										System.out.println("Enter the number of plates: ");
										int qtyFocaccia=obj.nextInt();
										totalPrice=qtyFocaccia*300;
										System.out.println("The total price of"+qtyFocaccia+"is"+totalPrice);
								break;
								case 2: System.out.println("You have selected Ciabatta in Bread option under Italian");
										System.out.println("Enter the number of plates: ");
										int qtyCiabatta=obj.nextInt();
										totalPrice=qtyCiabatta*250;
										System.out.println("The total price of"+qtyCiabatta+"is"+totalPrice);
								break;
								case 3: System.out.println("You have selected Classic Italian Bread in Bread option under Italian");
										System.out.println("Enter the number of plates: ");
										int qtyClassic=obj.nextInt();
										totalPrice=qtyClassic*200;
										System.out.println("The total price of"+qtyClassic+"is"+totalPrice);
								break;
								default: System.out.println("Invalid Choice");									
								break;
							}
					break;
				}
            break;
            case 5: System.exit(0);
            default: System.out.println("Invalid Choice");
            break;
        }
    }
}