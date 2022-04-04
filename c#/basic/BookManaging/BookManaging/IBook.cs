using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace BookManaging
{
    interface IBook
    {
        //mo ta index danh sach
        string this [int index]
        {
            get;set;
        }
        //Properti Title dai dien cho ten of danh sach
        string Title
        {
            get;set;
        }
        //Properti Author : ten tac gia of sach
        string Author
        {
            get;set;
        }
        //Publicsher :nha xuat ban
        string Publicsher
        {
            get;set;
        }
        //
        string ISBN
        {
            get;set;
        }
        int Year
        {
            get;set;
        }
        //Phuowng thuc Show : hien thi thong tin sach
        void Show();

        
    }
}
