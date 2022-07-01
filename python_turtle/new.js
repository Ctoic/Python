// find all images without alternate text and add it
//give them a title and alt text
// add a caption to the image
function foo()
{
    var images = document.getElementsByTagName('img');
    for (var i = 0; i < images.length; i++)
    {
        if (images[i].alt == '')
        {
            images[i].alt = images[i].title;
        }
    }

}
// sum of the numbers in the array
function sum(array)
{
    var total = 0;
    for (var i = 0; i < array.length; i++)
    {
        total += array[i];
    }
    return total;
}

// find prime numbers in the array

function prime()
{
    var array = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20];
    var prime = [];
    for (var i = 0; i < array.length; i++)
    {
        var count = 0;
        for (var j = 2; j < array[i]; j++)
        {
            if (array[i] % j == 0)
            {
                count++;
            }
        }
        if (count == 0)
        {
            prime.push(array[i]);
        }
    }
    return prime;
}

// find factorial 

//link to the next page
function next()
{
    window.location.href = "new.html";
}
