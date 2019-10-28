# SpreadsheetShuffle


                                    2014/2015 SOUTHERN CALIFORNIA REGIONAL
                                    ACM INTERNATIONAL COLLEGIATE PROGRAMMING CONTEST
                                                Problem 1
                                                Spreadsheet Shuffle
               Your company has just been acquired by Giganto Corporation, and your team has been assigned to
          help convert some experimental data to the standard Giganto format. The data to be converted are stored
          in spreadsheets. The first row of each spreadsheet has titles, and the remaining rows have data. Each field
          contains a string of one or more alphanumeric or space characters. No data fields are missing or empty. A
          single space is a valid data value. The data have been saved as comma-separated values.
          
          Another team has analyzed the files and added two rows to the beginning of each file which are the
          instructions for how to convert the file. The resulting files have the following format:
          • The first row (line) contains the new description for each column.
          • The second row has an integer in each field which indicates what column that field will be moved to.
          
          Input and output columns are numbered left-to-right starting at 1. A ‘3’, for example, in column 2
          means make column 2 in the input be column 3 in the output. A ‘0’ means delete this column. Each
          output column number will be specified exactly once. There will never be an output file with no output
          columns. No integer except ‘0’ will appear more than once. The greatest number in the row is the
          number of columns in the output and hence the number of fields in each output row.
          
          • The third row is the old header which will not appear in the new file.
          • The fourth and subsequent rows contain the data.
          
          Input lines are at most 80 characters long. Input is terminated by end-of-file.
          Your program is to print the converted spreadsheet as comma-separated values, one row per line. Print
          the new header line followed by the data lines in new column order. Spaces are significant. No extra
          characters are to appear on an output line.
          
          Sample Input
          result,input,PI, ,test,Y
          4,3,2,0,1,0
          col a,col b,col c,col d,col e,col f
          a2,b2,c2,d2,e2,f2
          43, b3 or not , ,d3,e3,f3
          
          
          Output for the Sample Input
          test,PI,input,result
          e2,c2,b2,a2
          e3, , b3 or not ,43
