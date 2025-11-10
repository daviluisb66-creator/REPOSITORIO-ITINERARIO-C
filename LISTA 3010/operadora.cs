using System;

class Program
{
    static void Main()
    {
        const double planoBasico = 50.00;
        const double minutoExcedente = 2.00;
        const int franquia = 100;
        
        Console.Write("Digite a quantidade de minutos consumidos: ");
        int minutos = int.Parse(Console.ReadLine());
        
        double valorPagar = planoBasico;
        
        if(minutos > franquia)
        {
            valorPagar += (minutos - franquia) * minutoExcedente;
        }
        
        Console.WriteLine($"Valor a pagar: R$ {valorPagar:F2}");
    }
}
