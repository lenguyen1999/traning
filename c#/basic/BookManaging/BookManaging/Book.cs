using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace BookManaging
{
    class Book : IBook
    {
        //field
        //data thanh vien
        #region Dinh nghia du lieu

        private string isbn;
        private string title;
        private string author;
        private string publicsher;
        private string year;
        //luu tru mang chua tren chuong
        private ArrayList chapter = new ArrayList();

        #endregion

        #region mo ta thuc thi
        public string this [int index]
        {

        }
        string IBook.this[int index] { get => throw new NotImplementedException(); set => throw new NotImplementedException(); }

        public string Title { get => throw new NotImplementedException(); set => throw new NotImplementedException(); }
        public string Author { get => throw new NotImplementedException(); set => throw new NotImplementedException(); }
        public string Publicsher { get => throw new NotImplementedException(); set => throw new NotImplementedException(); }
        public string ISBN { get => throw new NotImplementedException(); set => throw new NotImplementedException(); }
        public int Year { get => throw new NotImplementedException(); set => throw new NotImplementedException(); }

        public void Show()
        {
            throw new NotImplementedException();
        }

        #endregion
    }
}
