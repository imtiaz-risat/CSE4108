using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace LIBRARY_MANAGEMENT_SYSTEM_EVEN
{
    static public class utility
    {
        public static void RentaBook(int book_id,int user_id,int duration, List<rent> arr_rent)
        {
            rent temp= new rent(book_id,user_id,duration);
            arr_rent.Add(temp);
        }
    }
}
