using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace LIBRARY_MANAGEMENT_SYSTEM_EVEN
{
    public class book
    {
        public int id { get; set; }
        public string title { get; set; }
        public string author { get; set; }
        public string publisher { get; set; }
        public int quantity { get; set; }

        public book(int id,string title,string author,string publisher,int quantity)
        {
            this.id = id;
            this.title = title;
            this.author = author;
            this.publisher = publisher;
            this.quantity = quantity;
        }
    }
}
