using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace oop
{
    //TINH CHAT 1: TINH DONG GOI
    public class Person // tat cac cac phuong thuc, tinh chat duoc -> dong goi trong Person obj 
    {
        //khai bao bien data of obj
        private string sname;
        private int iage;
        private string sbirthday;
        public string name //phuong thuc bao ve data 
        { 
            get { return sname; } 
            set { sname = value; }
        }
        public int age
        {
            get { return iage; }
            set { iage = value; }
        }
        public string birthday
        {
            get { return sbirthday; }
            set { sbirthday = value; }
        }
        //contructor
        public Person() //ham khoi tao k co tham so
        {

        }
        public Person(string n,int a,string bd)
        {
            name = n;
            age = a;
            birthday = bd;
        }
        //destructor
        ~Person()
        {

        }
        //method
        public void input() 
        {
            Console.WriteLine("nhap tem: ");
            name = Console.ReadLine();

            Console.WriteLine("nhap tuoi");
            age = Convert.ToInt32(Console.ReadLine());

            Console.WriteLine("nhap ngay sinh: ");
            birthday = Console.ReadLine();


        }
        public void display()
        {
            Console.Write("Ten: {0}, Tuoi: {1} ,Ngay sinh: {2}", name, age, birthday);

        }

        public void running()
        {
            Console.WriteLine("{0} dang chay", name);
        }

        

    }
   
}
