using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace LIBRARY_MANAGEMENT_SYSTEM_EVEN
{
    public class rent
    { 
        public int BookdID;
        public int UserID;
        public int duration;
        public rent(int bookdID, int userID, int duration)
        {
            BookdID = bookdID;
            UserID = userID;
            this.duration = duration;
        }
    }
}
