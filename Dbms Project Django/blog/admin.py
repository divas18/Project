from django.contrib import admin
from .models import Post, Category, comment
from django_summernote.admin import SummernoteModelAdmin


# Register your models here.

class PostAdmin(admin.ModelAdmin):  # instead of ModelAdmin
    # summernote_fields = '__all__'
    list_display = ['title', 'author', 'category', 'created']
    search_fields = ['title', 'content']
    list_filter = ('category', 'tags')


admin.site.register(Post, PostAdmin)
admin.site.register(Category)
admin.site.register(comment)
