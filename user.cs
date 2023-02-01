using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace LIBRARY_MANAGEMENT_SYSTEM_EVEN
{
    public abstract class user
    {
        public int id { get; set; }
        public string name { get; set; }
        public string address { get; set; }
       
    }

    //child class
    public class regular_Users : user
    { 
       public List<book> books = new List<book>();

        public regular_Users(int id,string name,string address)
        {
            this.id = id;
            this.name = name;
            this.address = address;
        }
    }


    //child class
    public class special_user : user
    {
        
        public void AddBook(book book, List<book> Library_Books)
        {
           Library_Books.Add(book);
        }
        public void RemoveBook(book book, List<book> Library_Books)
        {
            Library_Books.Remove(book);
        }

        public special_user(int id, string name, string address)
        {
            this.id = id;
            this.name = name;
            this.address = address;
        }
    }


}
