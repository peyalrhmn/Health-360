#include <stdio.h>

#include <stdlib.h>

struct prescription
{
    char name[100];

    int age;

    float weight;

    char medicine[100];

    char test[100];

};

void health_information();

void emergency();

void symptoms();

int main()
{
    printf("\n\n\n                                     *****WELCOME TO HEALTH 360!*****\n\n\n");

    FILE *fp;

    float h,w,bmi=0;

    struct prescription p;

    printf("\n\nEnter your desired option number from below----->\n\n");

    printf("1> Normal physical health parameters.\n\n2> Things to know and steps to follow during emergencies.\n\n3> Probable disease check.\n\n4> Save your most recent doctor's prescription details.\n\n5> Check your BMI.\n\n6> Get emergency hospital and ambulance number.\n\n7> EXIT.\n\n");

    int option;

    scanf("%d",&option);

    if(option==1)
        health_information();

    else if(option==2)
        emergency();

    else if(option==3)
        symptoms();

    else if(option==4)
    {
        int s;

        fp=fopen("Prescription.txt","w");

        fflush(stdin);

        printf("\n\nEnter patient name: \n\n");
        gets(p.name);

        fflush(stdin);

        printf("\n\nEnter patient's age: \n\n");
        scanf("%d",&p.age);

        fflush(stdin);

        printf("\n\nEnter patient's weight in KG: \n\n");
        scanf("%f",&p.weight);

        fflush(stdin);

        printf("\n\nEnter prescribed medicine names: \n\n");
        gets(p.medicine);

        fflush(stdin);

        printf("\n\nEnter suggested test names: \n\n");
        gets(p.test);

        fflush(stdin);

        fprintf(fp,"Name: %s\n\nAge: %d\n\nWeight: %f\n\nMedicines: %s\n\nTests: %s\n\n",p.name,p.age,p.weight,p.medicine,p.test);

        printf("\n\nSuccessfully saved on PRESCRIPTION file!\n\n");

        fclose(fp);

        printf("\n\nPress 1 to return to main menu.\n\n");

        scanf("%d",&s);

        if(s==1)
            main();

        else
            printf("\n\nERROR!\n\n");

    }

    else if(option==5)
    {
        int s;

        printf("\n\nEnter weight in kg:- ");
        scanf("%f", &w);

        printf("\n\nEnter height in m:- ");
        scanf("%f", &h);

        bmi=w/(h*h);

        printf("\n\nYour BMI is %f", bmi);

        if(bmi<=15)
            printf("\n\nBMI Category:- Starvation\n\n");

        else if(bmi<=17.5)
            printf("\n\nBMI Category:- Anorexic\n\n");

        else if(bmi<=18.5)
            printf("\n\nBMI Category:- Underweight\n\n");

        else if(bmi<=24.9)
            printf("\n\nBMI Category:- Ideal\n\n");

        else if(bmi<=25.9)
            printf("\n\nBMI Category:- Overweight\n\n");

        else if(bmi<=39.9)
            printf("\n\nBMI Category:- Obese\n\n");

        else
            printf("\nBMI Category:- Morbidly Obese\n");


            printf("\n\nPress 1 to return to main menu.\n\n");

        scanf("%d",&s);

        if(s==1)
            main();

        else
            printf("\n\nERROR!\n\n");

    }

    else if(option==6)
    {
        int s;

        printf("\n\nFire Service Ambulance:          Tel: 9556666, 9555555\n\nAnju-Man-e-Mafidul Islam         Tel: 9336611, 7411660, 7410786\n\nAl-Markazul lslami Ambulance     Tel: 9127867, 8114980\n\nApanjon Ambulance Service        Tel: 9125420\n\nBSMMU                            Tel: 9661551-60, 8616641-50\n\nBARDEM                           Tel : 9661551-60, 8616641-50 Ext-2301\n\nBNSB.Dhaka Eye Hospital          Tel: 8014476\n\nCMH (Dhaka)                      Tel: 9871469\n\nDay-Night Ambulance Service      Tel: 9123073, 8122041\n\nDhaka Medical College Hospital   Tel: 8626812\n\nDhaka Eye Hospital               Tel: 8014476\n\nHeart Hospital                   Tel: 9801874, 9803302\n\nHoly Family Hospital             Tel: 8311721-25\n\nICDDRB (Cholere Hospital)        Tel: 8811751-60\n\nIPGMR                            Tel: 8614001-5, 8614545-9, 8612550-4, 8618652-6\n\nMedinova Medical Service Ltd     Tel: 8113721, 9120288, 9116851\n\nMonowara General Hospital        Tel: 8318135, 8319802, 8318529\n\nNational Heart Institute         Tel: 9122560-72, 8114806\n\nRafa Ambulance Service           Tel: 9110663\n\nRed Crescent Ambulance           Tel: 9330188-89\n\nSalimullah Medical College       Tel: 7319002-6\n\nShahid Suhrawardi Hospital       Tel: 9130800\n\nShishu Hospital                  Tel: 9113512, 8116061-2, 8114571-2\n\nSouth Asian Hospital             Tel: 8616565, 9665852.\n\nSouth Asian Hospital             Tel: 8616565, 9665852.\n\n");

        printf("\n\nPress 1 to return to main menu.\n\n");

        scanf("%d",&s);

        if(s==1)
            main();

        else
            printf("\n\nERROR!\n\n");

    }


    else if(option==7)
        exit(1);

    else
    {
        int s;

        printf("\nERROR!\n");

        printf("\n\nPress 1 to return to main menu.\n\n");

        scanf("%d",&s);

        if(s==1)
            main();

        else
            printf("\n\nERROR!\n\n");
    }

    return 0;
}

void health_information()
{
    int s;

    printf("\n\nNormal vital sign ranges for the average healthy adult while resting are:\n\n1.Blood pressure: 90/60 mm Hg to 120/80 mm Hg\n2.Breathing: 12 to 18 breaths per minute\n3.Pulse: 60 to 100 beats per minute\n4.Temperature: 97.8F to 99.1F (36.5C to 37.3C) average 98.6F (37C)\n");

    printf("\n\nPress 1 to return to main menu.\n\n");

     scanf("%d",&s);

    if(s==1)
        main();

    else
        printf("\n\nERROR!\n\n");


}

void emergency()
{
    int s;

    printf("\n\nSteps to take when an emergency occurs:\n\nTake a deep breath.\nCount to 10. Tell yourself you can handle the situation.\nCheck for danger. Protect yourself and the injured person from fire, explosions, or other hazards.\nTry to look at the situation as a whole. \nWhat is the most serious problem and what do you need to do first? The most obvious problem is not always the most serious.\nTreat the most life-threatening problems like bleeding or shock first.\nIf you think the person has a spinal injury, do not move him or her unless the danger is great.\nCheck for broken bones and other injuries.\nIf the person is unconscious or does not respond to your voice or touch, be ready to start CPR.\n\n");

    printf("\n\nWhen you have a cut:\n\nStop the bleeding with direct pressure to the wound.\nDetermine if other tissues, such as blood vessels, nerves, tendons, ligaments, joints, bones, or internal organs, have been injured.\nDetermine if treatment by a doctor, such as stitches, staples, or skin adhesives, is needed.\nClean the wound and remove any dirt or debris to prevent infections, both bacterial skin infections and tetanus-lockjaw.\nDetermine whether you need a tetanus shot.\n");

    printf("\n\nChest discomfort or pain may be a key warning symptom of a heart attack. Heart attack symptoms may include:\n\nChest pain or pressure, or a strange feeling in the chest.\nSweating.\nShortness of breath.\nNausea or vomiting.\nPain, pressure, or a strange feeling in the back, neck, jaw, or upper belly, or in one or both shoulders or arms.\nLightheadedness or sudden weakness.\nA fast or irregular heartbeat.\n\nIF ANY OF THIS HAPPENS GO TO THE HOSPITAL IMMEDIATELY.\n");

    printf("\n\nPress 1 to return to main menu.\n\n");

    scanf("%d",&s);

    if(s==1)
        main();

    else
        printf("\n\nERROR!\n\n");
}

void symptoms()
{
    int s;

    printf("\nSelect your symptoms from below: \n");

    printf("\n1. A yellow tinge to the skin and the whites of the eyes, Normally starting at the head and spreading down the body, Pale stools, Dark urine, Itchiness.\n\n");

    printf("\n2. Poor appetite, Headaches, Generalized aches and pains, Fever as high as 104 degrees Farenheit, Lethargy, Diarrhea.\n\n");

    printf("\n3. Excessive thirst and hunger, Frequent urination (from urinary tract infections or kidney problems), Weight loss or gain, Fatigue, Irritability, Blurred vision, Slow-healing wounds, Nausea.\n\n");

    printf("\n4. Cough, which may produce greenish, yellow or even bloody mucus, Fever, sweating and shaking chills, Shortness of breath, Rapid, shallow breathing, Sharp or stabbing chest pain, Loss of appetite, Fatigue.\n\n");

    printf("\n5. Nausea, Persistent diarrhea, Chronic fatigue, Rapid weight loss, Cough and shortness of breath, Recurring fever, Chills, Night sweats, Rashes, sores, or lesions in the mouth or nose, on the genitals.\n\n");

    printf("\n6. Coughing that lasts three or more weeks, Coughing up blood, Chest pain, or pain with breathing or coughing, Unintentional weight loss, Fatigue, Fever, Night sweats, Chills.\n\n");

    printf("\n7. Press to go to main menu.\n\n");

    scanf("%d",&s);

    if(s==1)
        printf("\nYou might be affected by JAUNDICE. Please go to a doctor.\n\n");

    else if(s==2)
        printf("\nYou might be affected by TYPHOID. Please go to a doctor.\n\n");

    else if(s==3)
        printf("\nYou might be affected by DIABETES. Please go to a doctor.\n\n");

    else if(s==4)
        printf("\nYou might be affected by PNEUMONIA. Please go to a doctor.\n\n");

    else if(s==5)
        printf("\nYou might be affected by HIV. Please go to a doctor.\n\n");

    else if(s==6)
        printf("\nYou might be affected by TUBERCULOSIS. Please go to a doctor.\n\n");

    else if(s==7)
        main();

    else
        printf("\nERROR!\n");


        //HEALTH 360 by
        //PIAL
}
