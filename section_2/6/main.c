#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/slab.h>

#define NUM 1010

static int kmalloc_init(void){
  unsigned char *tmp;
  int i;
  tmp = (unsigned char*)kmalloc(PAGE_SIZE * NUM, GFP_KERNEL); 

  if(tmp==NULL){
    printk("ERRO R\n");
    return -1;
  }

  for(i=0;i<NUM;i++) tmp[i]=255;

  printk("allocated %lu Byte\n", PAGE_SIZE * NUM);
  kfree(tmp);

  return 0;
}

static void kmalloc_exit(void){
  printk("bye\n");
}

module_init(kmalloc_init);
module_exit(kmalloc_exit);

