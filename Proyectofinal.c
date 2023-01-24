#include <stdio.h>
#include <stdlib.h>

int opcion;
int especialidad;
int selecciondoctor;
int datos;
char nombre [99];
char apellido [99];
char telefono [11];
char cedula [11];
int correo [99];
char usuario [99];
char contrasena [99];


int main()
{
    system ("COLOR D0");
    printf("\t\t\t\t\t==============================\n");
    printf("\t\t\t\t\tBienvenido a su portal Medico\n");
    printf("\t\t\t\t\t==============================\n");
    printf("\n");
    printf("\n");
    printf("Seleccione el requirimiento que necesita:\n");
    printf("1. Cita medica\n");
    
   



    scanf ("%d", &opcion);
    if (opcion==1){
        printf("\t\t\t\t==================================================================\n");
		printf("\t\t\t\tNuestros especialistas estan altamente capacitados en su necesidad\n");
		printf("\t\t\t\t==================================================================\n");
        printf("\n");
        printf("\n");
        printf("Porfavor seleccione su especialidad necesitada\n");
        printf("1. Dermatologia\n");
        printf("2. Medicina General\n");
        printf("3. Oftalmologia\n");
        scanf("%d", &especialidad);
        
        
        
        
        
        if (especialidad==1){
            printf("\t\t\t\t\t=================================\n");
            printf("\t\t\t\t\tLos mejores dermatologos del pais\n");
            printf("\t\t\t\t\t=================================\n");
            printf("Seleccione el doctor con el que quiere su cita\n");
            printf("\n");
            printf("\n");
            printf("====================\n");
            printf("1.Felipe Guerra\n");
            printf("Graduado en la universidad Central\n");
            printf ("=======================================================\n");
            printf("El costo de la consulta con este doctor es de 35 dolares\n");
            printf ("=======================================================\n");
            printf("El doctor atiende en:\n");
            printf("Axxis Hospital\n");
            printf("Hospital Vosandez\n");
            printf("Tiene teleconsultas\n");
            printf("====================\n");
            printf("\n");
            printf("\n");
            printf("====================\n");
            printf("2.Eduardo Montero\n");
            printf("Graduado en la universidad Catolica\n");
            printf ("=======================================================\n");
            printf("El costo de la consulta con este doctor es de 50 dolares\n");
            printf ("=======================================================\n");
            printf("El doctor atiende en:\n");
            printf("Citimed\n");
            printf("No tiene teleconsultas\n");
            printf("====================\n");
            printf("\n");
            printf("\n");
            printf("====================\n");
            printf("3.Tatiana Manosalvas\n");
            printf("Graduada en Universidad del Litoral\n");
            printf ("=======================================================\n");
            printf("El costo de la consulta con este doctor es de 40.20 dolares\n");
            printf ("=======================================================\n");
            printf("El doctor atiende en:\n");
            printf("\n");
            printf("Hospital del Valle\n");
            printf("Tiene teleconsultas\n");
            printf("====================\n");
            scanf ("%d",&selecciondoctor);
            
            
            
            if (selecciondoctor==1){
            printf ("Selecciono a Felipe guerra\n");
            printf ("El doctor necesita saber a quien va a atender!\n");
            printf ("Registrate o Inicia sesion\n");
            printf ("1. Registrate\n");
            printf ("2. Logueate\n");
            scanf ("%d", &datos);
            
            
            }
            else if (selecciondoctor==2){
            
            printf ("Selecciono a Eduardo Montero\n");
            printf ("El doctor necesita saber a quien va a atender!\n");
            printf ("Registrate o Inicia sesion\n");
            printf ("1. Registrate\n");
            printf ("2. Logueate\n");
            scanf ("%d", &datos);
            
            }
            else if (selecciondoctor==3){

            printf ("Selecciono a Tatiana Manosalvas\n");
            printf ("El doctor necesita saber a quien va a atender!\n");
            printf ("Registrate o Inicia sesion\n");
            printf ("1. Registrate\n");
            printf ("2. Logueate\n");
            scanf ("%d", &datos);
            
            }
        
        
        
        
        
        
        
        
        } else if (especialidad==2){
            printf("\t\t\t\t\t======================================\n");
            printf("\t\t\t\t\tLos mejores medicos generales del pais\n");
            printf("\t\t\t\t\t======================================\n");
            printf("Seleccione el doctor con el que quiere su cita\n");
            printf("\n");
            printf("\n");
            printf("====================\n");
            printf("1.Pablo Torre\n");
            printf("Graduado en la universidad de Catalunya\n");
            printf ("=======================================================\n");
            printf("El costo de la consulta con este doctor es de 30 dolares\n");
            printf ("=======================================================\n");
            printf("El doctor atiende en:\n");
            printf("Axxis Hospital\n");
            printf("Hospital Vosandez\n");
            printf("Tiene teleconsultas\n");
            printf("====================\n");
            printf("\n");
            printf("\n");
            printf("====================\n");
            printf("2.Gabriel Martinelli\n");
            printf("Graduado en la universidad de las Americas\n");
            printf ("=======================================================\n");
            printf("El costo de la consulta con este doctor es de 30 dolares\n");
            printf ("=======================================================\n");
            printf("El doctor atiende en:\n");
            printf("Clinica Martinelli\n");
            printf("No tiene teleconsultas\n");
            printf("====================\n");
            printf("\n");
            printf("\n");
            printf("====================\n");
            printf("3.Yandry Perez\n");
            printf("Graduado en Universidad del Litoral\n");
            printf ("=======================================================\n");
            printf("El costo de la consulta con este doctor es de 20 dolares\n");
            printf ("=======================================================\n");
            printf("El doctor atiende en:\n");
            printf("\n");
            printf("Hospital del Valle\n");
            printf("Tiene teleconsultas\n");
            printf("====================\n");
            scanf ("%d",&selecciondoctor);
            
            
            
            
            if (selecciondoctor==1){
            printf ("Selecciono a Pablo Torre\n");
            printf ("El doctor necesita saber a quien va a atender!\n");
            printf ("Registrate o Inicia sesion\n");
            printf ("1. Registrate\n");
            printf ("2. Logueate\n");
            scanf ("%d", &datos);
            
            
            }
            else if (selecciondoctor==2){
            
            printf ("Selecciono a Gabriel Martinelli\n");
            printf ("El doctor necesita saber a quien va a atender!\n");
            printf ("Registrate o Inicia sesion\n");
            printf ("1. Registrate\n");
            printf ("2. Logueate\n");
            scanf ("%d", &datos);
           
            }
            else if (selecciondoctor==3){

            printf ("Selecciono a Yandry Perez\n");
            printf ("El doctor necesita saber a quien va a atender!\n");
            printf ("Registrate o Inicia sesion\n");
            printf ("1. Registrate\n");
            printf ("2. Logueate\n");
            scanf ("%d", &datos);
           
            }  
        
        
        
        
        
        
        
        } else if (especialidad==3){
            printf("\t\t\t\t\t=================================\n");
            printf("\t\t\t\t\tLos mejores oftalmologos del pais\n");
            printf("\t\t\t\t\t=================================\n");
            printf("Seleccione el doctor con el que quiere su cita\n");
            printf("\n");
            printf("\n");
            printf("====================\n");
            printf("1.Marcos Alonso\n");
            printf("Graduado en la universidad de Catalunya\n");
            printf ("=======================================================\n");
            printf("El costo de la consulta con este doctor es de 65 dolares\n");
            printf ("=======================================================\n");
            printf("El doctor atiende en:\n");
            printf("Axxis Hospital\n");
            printf("Hospital Vosandez\n");
            printf("Tiene teleconsultas\n");
            printf("====================\n");
            printf("\n");
            printf("\n");
            printf("====================\n");
            printf("2.Megan Rapinoe\n");
            printf("Graduado en la universidad de las Americas\n");
            printf ("=======================================================\n");
            printf("El costo de la consulta con este doctor es de 60 dolares\n");
            printf ("=======================================================\n");
            printf("El doctor atiende en:\n");
            printf("Clinica Martinelli\n");
            printf("No tiene teleconsultas\n");
            printf("====================\n");
            printf("\n");
            printf("\n");
            printf("====================\n");
            printf("3.Alex Morgan\n");
            printf("Graduado en Universidad del Litoral\n");
            printf ("=======================================================\n");
            printf("El costo de la consulta con este doctor es de 70 dolares\n");
            printf ("=======================================================\n");
            printf("El doctor atiende en:\n");
            printf("\n");
            printf("Hospital del Valle\n");
            printf("Tiene teleconsultas\n");
            printf("====================\n");
            scanf ("%d",&selecciondoctor);
            
            
            
            
            
            if (selecciondoctor==1){
            printf ("Selecciono a Marcos Alonso\n");
            printf ("El doctor necesita saber a quien va a atender!\n");
            printf ("Registrate o Inicia sesion\n");
            printf ("1. Registrate\n");
            printf ("2. Logueate\n");
            scanf ("%d", &datos);
            
            
            }
            
            
            
            
            
            else if (selecciondoctor==2){
            
            printf ("Selecciono a Gabriel Martinelli\n");
            printf ("El doctor necesita saber a quien va a atender!\n");
            printf ("Registrate o Inicia sesion\n");
            printf ("1. Registrate\n");
            printf ("2. Logueate\n");
            scanf ("%d", &datos);
          
            }
            else if (selecciondoctor==3){

            printf ("Selecciono a Yandry Perez\n");
            printf ("El doctor necesita saber a quien va a atender!\n");
            printf ("Registrate o Inicia sesion\n");
            printf ("1. Registrate\n");
            printf ("2. Logueate\n");
            scanf ("%d", &datos);
            
            }  
        }

        if (datos==1){
                
                FILE *datospaciente;
                 
                datospaciente = fopen ("Datospaciente.txt", "w");



                    printf ("============================================\n");
                    printf ("Bienvenido a la red médica Salud para Todos\n");
                    printf ("============================================\n");
                    printf ("NecesiFtamos los siguientes datos\n");
                    
                    printf ("Nombres:\n");
                    fputs ("Nombres:\n", datospaciente);
                    scanf  ("%s", &nombre);
                    fputs (nombre, datospaciente);
                    
                    printf ("Apellidos:\n");
                    fputs ("Apellidos:\n", datospaciente);
                    scanf  ("%s", &apellido);
                    fputs (apellido, datospaciente);
                    
                    printf ("Cedula:\n");
                    fputs ("Cedula:\n", datospaciente);
                    scanf  ("%s", &cedula);
                    fputs (cedula, datospaciente);
                    
                    printf ("Celular\n");
                    fputs ("Celular:\n", datospaciente);
                    scanf  ("%s", &telefono);
                    fputs (telefono, datospaciente);
                    
                    printf ("Usuario:\n");
                    fputs ("Usuario:\n", datospaciente);
                    scanf  ("%s", &usuario);
                    fputs (usuario, datospaciente);
                    
                    printf ("Contrasena:\n");
                    fputs ("Contrasena:\n", datospaciente);
                    scanf  ("%s", &contrasena);
                    fputs (contrasena, datospaciente);
                    
                    printf ("Tus datos seran enviados al doctor\n", datospaciente);
                    printf ("Mantente alerta! Pronto te contactaran\n", datospaciente);

                    
                    
                    
                    fclose (datospaciente);
            }else if (datos==2){

                printf ("====================");
                printf ("Bienvenido de Nuevo");
                printf ("====================\n");

                printf ("Ingresa tu Usuario:\n");
                scanf ("%s", &usuario);
                printf ("Ingresa tu Contrasena:\n");
                scanf ("%s", &contrasena);
                
                printf ("=======================================\n");
                printf ("Tus datos seran enviados al doctor\n");
                printf ("Mantente alerta! Pronto te contactaran\n");
                printf ("=======================================\n");



            }
    }



    



return 0;
}
