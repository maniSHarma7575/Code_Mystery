<script>

$(document).ready(function(){
    
    $('#add').click(function(){
        
        var inp = $('#box');
        
        var i = $('input').size() + 1;
        
        $('<div id="box' + i +'"><input type="text" id="name" class="name" name="name' + i +'" placeholder="Input '+i+'"/><img src="remove.png" width="32" height="32" border="0" align="top" class="add" id="remove" /> </div>').appendTo(inp);
        
        i++;
        
    });
    
    
    
    $('body').on('click','#remove',function(){
        
        $(this).parent('div').remove();

        
    });

        
});

</script>